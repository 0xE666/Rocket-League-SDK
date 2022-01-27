/*
#############################################################################################
# Rocket League (220114.63961.361013) SDK
# Generated with the UE3SDKGenerator v2.0.8
# ========================================================================================= #
# File: GameDefines.h
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/ItsBranK/UE3SDKGenerator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once
#include <algorithm>
#include <locale>
#include <stdlib.h>
#include <xlocale>
#include <ctype.h>
#include <chrono>
#include <thread>
#include <vector>
#include <map>

// GObjects
#define GObjects_Pattern		(const unsigned char*)"null"
#define GObjects_Mask			(const char*)"??????xx??xxxxxx"
// GNames
#define GNames_Pattern			(const unsigned char*)"null"
#define GNames_Mask				(const char*)"??????xx??xxxxxx"
// Process Event
#define ProcessEvent_Pattern	(const unsigned char*)"null"
#define ProcessEvent_Mask		(const char*)"xxxxxxx????xx"

/*
# ========================================================================================= #
# Defines
# ========================================================================================= #
*/

template<typename TArray>
struct TIterator
{
public:
	using ElementType = typename TArray::ElementType;
	using ElementPointer = ElementType*;
	using ElementReference = ElementType&;
	using ElementConstReference = const ElementType&;

private:
	ElementPointer IteratorData;

public:
	TIterator(ElementPointer inElementPointer)
	{
		IteratorData = inElementPointer;
	}

public:
	TIterator& operator++()
	{
		IteratorData++;
		return *this;
	}

	TIterator operator++(int32_t)
	{
		TIterator iteratorCopy = *this;
		++(*this);
		return iteratorCopy;
	}

	TIterator& operator--()
	{
		IteratorData--;
		return *this;
	}

	TIterator operator--(int32_t)
	{
		TIterator iteratorCopy = *this;
		--(*this);
		return iteratorCopy;
	}

	ElementReference operator[](int32_t index)
	{
		return *(IteratorData[index]);
	}

	ElementPointer operator->()
	{
		return IteratorData;
	}

	ElementReference operator*()
	{
		return *IteratorData;
	}

	bool operator==(const TIterator& other) const
	{
		return (IteratorData == other.IteratorData);
	}

	bool operator!=(const TIterator& other) const
	{
		return !(*this == other);
	}
};

template<typename InElementType>
struct TArray
{
public:
	using ElementType = InElementType;
	using ElementPointer = ElementType*;
	using ElementReference = ElementType&;
	using ElementConstReference = const ElementType&;
	using Iterator = TIterator<TArray<ElementType>>;

private:
	ElementPointer ArrayData;
	int32_t ArrayCount;
	int32_t ArrayMax;

public:
	TArray()
	{
		ArrayData = nullptr;
		ArrayCount = 0;
		ArrayMax = 0;

		//ReAllocate(sizeof(ElementType));
	}

	~TArray()
	{
		//Clear();
		//::operator delete(ArrayData, ArrayMax * sizeof(ElementType));
	}

public:
	ElementConstReference operator[](int32_t index) const
	{
		if (index <= ArrayCount)
		{
			return ArrayData[index];
		}
	}

	ElementReference operator[](int32_t index)
	{
		if (index <= ArrayCount)
		{
			return ArrayData[index];
		} 
	}

	ElementConstReference At(const int32_t index) const
	{
		if (index <= ArrayCount)
		{
			return ArrayData[index];
		} 
	}

	ElementReference At(const int32_t index)
	{
		if (index <= ArrayCount)
		{
			return ArrayData[index];
		} 
	}

	void Add(ElementConstReference newElement)
	{
		if (ArrayCount >= ArrayMax)
		{
			ReAllocate(sizeof(ElementType) * (ArrayCount + 1));
		}

		new(&ArrayData[ArrayCount]) ElementType(newElement);
		ArrayCount++;
	}

	void Add(ElementReference& newElement)
	{
		if (ArrayCount >= ArrayMax)
		{
			ReAllocate(sizeof(ElementType) * (ArrayCount + 1));
		}

		new(&ArrayData[ArrayCount]) ElementType(newElement);
		ArrayCount++;
	}

	void PopBack()
	{
		if (ArrayCount > 0)
		{
			ArrayCount--;
			ArrayData[ArrayCount].~ElementType();
		}
	}

	void Clear()
	{
		for (int32_t i = 0; i < ArrayCount; i++)
		{
			ArrayData[i].~ElementType();
		}

		ArrayCount = 0;
	}

	int32_t Num() const
	{
		return ArrayCount;
	}

	int32_t Max() const
	{
		return ArrayMax;
	}

	Iterator begin()
	{
		return Iterator(ArrayData);
	}

	Iterator end()
	{
		return Iterator(ArrayData + ArrayCount);
	}

private:
	void ReAllocate(int32_t newArrayMax)
	{
		ElementPointer newArrayData = (ElementPointer)::operator new(newArrayMax * sizeof(ElementType));

		int32_t newNum = ArrayCount;

		if (newArrayMax < newNum)
		{
			newNum = newArrayMax;
		}

		for (int32_t i = 0; i < newNum; i++)
		{
			new(newArrayData + i) ElementType(std::move(ArrayData[i]));
		}

		for (int32_t i = 0; i < ArrayCount; i++)
		{
			ArrayData[i].~ElementType();
		}

		::operator delete(ArrayData, ArrayMax * sizeof(ElementType));
		ArrayData = newArrayData;
		ArrayMax = newArrayMax;
	}
};
template<typename TKey, typename TValue>
struct TMap
{
private:
	struct TPair
	{
		TKey Key;
		TValue Value;
		int32_t* HashNext;
	};

public:
	using ElementType = TPair;
	using ElementPointer = ElementType*;
	using ElementReference = ElementType&;
	using ElementConstReference = const ElementType&;
	using Iterator = TIterator<TMap<TKey, TValue>>;

public:
	ElementPointer ElementData;				// 0x0000 (0x0008)
	int32_t ElementCount;					// 0x0008 (0x0004)
	int32_t ElementMax;						// 0x000C (0x0004)
	std::uintptr_t IndirectData;            // 0x0010 (0x0008)
	int32_t InlineData[0x4];                // 0x0018 (0x0010)
	int32_t NumBits;                        // 0x0028 (0x0004)
	int32_t MaxBits;                        // 0x002C (0x0004)
	int32_t FirstFreeIndex;                 // 0x0030 (0x0004)
	int32_t NumFreeIndices;                 // 0x0034 (0x0004)
	int64_t InlineHash;                     // 0x0038 (0x0008)
	int32_t* Hash;                          // 0x0040 (0x0008)
	int32_t HashCount;                      // 0x0048 (0x0004)

public:
	TMap()
	{
		ElementData = nullptr;
		ElementCount = 0;
		ElementMax = 0;
		IndirectData = NULL;
		NumBits = 0;
		MaxBits = 0;
		FirstFreeIndex = 0;
		NumFreeIndices = 0;
		InlineHash = 0;
		Hash = nullptr;
		HashCount = 0;
	}

	TMap(struct FMap_Mirror& fMap)
	{
		*this = *reinterpret_cast<TMap<TKey, TValue>*>(&fMap);
	}

	~TMap() { }

public:
	ElementConstReference operator[](const int32_t index) const
	{
		if (index <= ElementCount)
		{
			return ElementData[index];
		}
	}

	ElementReference operator[](const int32_t index)
	{
		if (index <= ElementCount)
		{
			return ElementData[index];
		}
	}

	const TValue& operator[](const TKey key) const
	{
		for (int32_t i = 0; i < Num(); i++)
		{
			const TPair& pair = ElementData[i];

			if (pair.Key == key)
			{
				return pair.Value;
			}
		}
	}

	TValue& operator[](const TKey key)
	{
		for (int32_t i = 0; i < Num(); i++)
		{
			TPair& pair = ElementData[i];

			if (pair.Key == key)
			{
				return pair.Value;
			}
		}
	}

	TMap<TKey, TValue> operator=(const struct FMap_Mirror& fMap)
	{
		*this = *reinterpret_cast<TMap<TKey, TValue>*>(&fMap);
		return *this;
	}

	ElementConstReference At(const int32_t index) const
	{
		if (index <= ElementCount)
		{
			return ElementData[index];
		}
	}

	ElementReference At(const int32_t index)
	{
		if (index <= ElementCount)
		{
			return ElementData[index];
		}
	}

	int32_t Num() const
	{
		return ElementCount;
	}

	int32_t Max() const
	{
		return ElementMax;
	}

	Iterator begin()
	{
		return Iterator(ElementData);
	}

	Iterator end()
	{
		return Iterator(ElementData + ElementCount);
	}
};

/*
# ========================================================================================= #
# Globals
# ========================================================================================= #
*/

extern TArray<class UObject*>* GObjects;
extern TArray<struct FNameEntry*>* GNames;

/*
# ========================================================================================= #
# Structs
# ========================================================================================= #
*/

struct FNameEntry
{
	uint8_t			UnknownData00[0x18];
	wchar_t			Name[0x100];
};

struct FName
{
public:
	using ElementType = const wchar_t;
	using ElementPointer = ElementType*;

private:
	int32_t			FNameEntryId;									// 0x0000 (0x04)
	int32_t			InstanceNumber;									// 0x0004 (0x04)

public:
	FName()
	{
		FNameEntryId = 0;
		InstanceNumber = 0;
	}

	FName(const int32_t id)
	{
		FNameEntryId = id;
		InstanceNumber = 0;
	}

	FName(const ElementPointer nameToFind)
	{
		static std::vector<int32_t> nameCache{};

		FNameEntryId = 0;
		InstanceNumber = 0;

		for (int32_t entryId : nameCache)
		{
			if (Names()->At(entryId))
			{
				if (!wcscmp(Names()->At(entryId)->Name, nameToFind))
				{
					FNameEntryId = entryId;
					return;
				}
			}
		}

		for (int32_t i = 0; i < Names()->Num(); i++)
		{
			if (Names()->At(i))
			{
				if (!wcscmp(Names()->At(i)->Name, nameToFind))
				{
					nameCache.push_back(i);
					FNameEntryId = i;
				}
			}
		}
	}

	~FName() { }

public:
	static class TArray<struct FNameEntry*>* Names()
	{
		TArray<FNameEntry*>* GNamesArray = reinterpret_cast<TArray<FNameEntry*>*>(GNames);
		return GNamesArray;
	}

	int32_t GetDisplayIndex() const
	{
		return FNameEntryId;
	}

	const struct FNameEntry GetDisplayNameEntry() const
	{
		if (IsValid())
		{
			return *Names()->At(FNameEntryId);
		}

		return FNameEntry();
	}

	struct FNameEntry* GetEntry()
	{
		if (IsValid())
		{
			return Names()->At(FNameEntryId);
		}

		return nullptr;
	}

	int32_t GetNumber() const
	{
		return InstanceNumber;
	}

	void SetNumber(int32_t newNumber)
	{
		InstanceNumber = newNumber;
	}

	std::string ToString() const
	{
		if (IsValid())
		{
			std::wstring ws(GetDisplayNameEntry().Name);
			std::string str(ws.begin(), ws.end());
			return str;
		}

		return std::string("UnknownName");
	}

	bool IsValid() const
	{
		if (FNameEntryId < 0 || FNameEntryId > Names()->Num())
		{
			return false;
		}

		return true;
	}

public:
	struct FName operator=(const struct FName& other)
	{
		FNameEntryId = other.FNameEntryId;
		InstanceNumber = other.InstanceNumber;
		return *this;
	}

	bool operator==(const struct FName& other) const
	{
		return (FNameEntryId == other.FNameEntryId);
	}

	bool operator!=(const struct FName& other) const
	{
		return (FNameEntryId != other.FNameEntryId);
	}
};

struct FString
{
public:
	using ElementType = const wchar_t;
	using ElementPointer = ElementType*;

private:
	ElementPointer ArrayData;
	int32_t ArrayCount;
	int32_t ArrayMax;

public:
	FString()
	{
		ArrayData = nullptr;
		ArrayCount = 0;
		ArrayMax = 0;
	}

	FString(ElementPointer other)
	{
		ArrayData = nullptr;
		ArrayCount = 0;
		ArrayMax = 0;

		ArrayMax = ArrayCount = *other ? (wcslen(other) + 1) : 0;

		if (ArrayCount > 0)
		{
			ArrayData = other;
		}
	}

	~FString() {}

public:
	std::string ToString() const
	{
		if (!IsValid())
		{
			std::wstring wideStr(ArrayData);
			std::string str(wideStr.begin(), wideStr.end());
			return str;
		}

		return std::string("null");
	}

	bool IsValid() const
	{
		return !ArrayData;
	}

	FString operator=(ElementPointer other)
	{
		if (ArrayData != other)
		{
			ArrayMax = ArrayCount = *other ? (wcslen(other) + 1) : 0;

			if (ArrayCount > 0)
			{
				ArrayData = other;
			}
		}

		return *this;
	}

	bool operator==(const FString& other)
	{
		return (!wcscmp(ArrayData, other.ArrayData));
	}
};

struct FPointer
{
	uintptr_t Dummy;
};

struct FScriptDelegate
{
	class UObject*	Object;
	unsigned char UnknownData00[0x10];
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/
