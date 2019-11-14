#include <share.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <tchar.h>

#include "FileStorage.h"
using namespace std;

#include "StorageInterface.h"

// -----------------------------------------------------------------------------
// CFileStorage* CFileStorage::Create(MStorageInterface& aInterface,
//		const char* aFileName)
// Creates instance of class
// -----------------------------------------------------------------------------
//
CFileStorage* CFileStorage::Create(MStorageInterface& aInterface,
		const char* aFileName) {
	CFileStorage* self = new CFileStorage(aInterface);
	self->Construct(aFileName);

	return self;
}

// -----------------------------------------------------------------------------
// CFileStorage::CFileStorage(MStorageInterface& aInterface)
// First stage constructor
// -----------------------------------------------------------------------------
//
CFileStorage::CFileStorage(MStorageInterface& aInterface) :
		iInterface(aInterface),
		iFileName(NULL),
		iLastError(0) {
}

// -----------------------------------------------------------------------------
// void CFileStorage::Construct(const char* aFileName)
// Second stage constructor
// -----------------------------------------------------------------------------
//
void CFileStorage::Construct(const char* aFileName) {
	iFileName = new char[strlen(aFileName) + 1];
	strcpy(iFileName, aFileName);
}

// -----------------------------------------------------------------------------
// CFileStorage::~CFileStorage()
// Destructor
// -----------------------------------------------------------------------------
//
CFileStorage::~CFileStorage() {
	delete[] iFileName;
}

// -----------------------------------------------------------------------------
// bool CFileStorage::Store()
// Stores data by calling MStorageInterface::OnStore() callback
// -----------------------------------------------------------------------------
//
bool CFileStorage::Store() {
	ofstream fileStream;
	fileStream.open(iFileName,
			ios_base::out | ios_base::binary | ios_base::trunc);
	if (!fileStream) {
		iLastError = EFileOpen;
		return false;
	}

	iInterface.OnStore(fileStream);
	fileStream.close();
	iLastError = ENoError;

	return true;
}

// -----------------------------------------------------------------------------
// bool CFileStorage::Load()
// Loads data by calling MStorageInterface::OnLoad() callback
// -----------------------------------------------------------------------------
//
bool CFileStorage::Load() {
	ifstream fileStream;
	fileStream.open(iFileName, ios_base::in | ios_base::binary);
	if (!fileStream) {
		iLastError = EFileOpen;
		return false;
	}

	iInterface.OnLoad(fileStream);
	fileStream.close();
	iLastError = ENoError;
	return true;
}

// -----------------------------------------------------------------------------
// int CFileStorage::GetLastError() const
// Retrieves result of the last operation
// -----------------------------------------------------------------------------
//
int CFileStorage::GetLastError() const {
	return iLastError;
}
