#include "WebSocketStructs.h"

FString FDebugLoginRequestData::GetName() const
{
	return Name;
}

FString FEchoRequestData::GetName() const
{
	return Name;
}

FString FMgsError::GetName() const
{
	return Name;
}

