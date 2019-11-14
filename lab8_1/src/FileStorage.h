#ifndef FILE_STORE_H
#define FILE_STORE_H
#include "StorageInterface.h"

class MStorageInterface;

class CFileStorage {
public:
	/**
	 * Creates instance of class
	 * @param aInterface Interface owner
	 * @param aFileName File name for operationss
	 * @return A pointer to constructed object
	 */
	static CFileStorage* Create(MStorageInterface& aInterface,
			const char* aFileName);

	/**
	 * Destructor
	 */
	~CFileStorage();

	/**
	 * Stores data by calling MStorageInterface::OnStore() callback
	 * @return true if operation was successful, otherwise false
	 * @note Use GetLastError() to receive type of error
	 */
	bool Store();

	/**
	 * Loads data by calling MStorageInterface::OnLoad() callback
	 * @return true if operation was successful, otherwise false
	 * @note Use GetLastError() to receive type of error
	 */
	bool Load();

	/**
	 * Retrieves result of the last operation
	 * @return Returns last error code according to the last operation
	 */
	int GetLastError() const;

public:
	enum TErrors {
		ENoError = 0, EFileOpen = 1,

		ELastError
	};

protected:
	/**
	 * First stage constructor
	 * @param aInterface Interface owner
	 */
	CFileStorage(MStorageInterface& aInterface);

	/**
	 * Second stage constructor
	 * @param aFileName Name of file for operations
	 */
	void Construct(const char* aFileName);

private:
	MStorageInterface& iInterface;
	char* iFileName;
	int iLastError;
};

#endif
