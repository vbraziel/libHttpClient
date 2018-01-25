// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "pch.h"
#include "../hcwebsocket.h"

using namespace xbox::httpclient;


HC_RESULT Internal_HCWebSocketConnect(
    _In_z_ PCSTR uri,
    _In_ HC_WEBSOCKET_HANDLE websocket,
    _In_ HC_WEBSOCKET_CONNECT_INIT_ARGS args,
    _In_ HC_SUBSYSTEM_ID taskSubsystemId,
    _In_ uint64_t taskGroupId,
    _In_opt_ void* completionRoutineContext,
    _In_opt_ HCWebSocketCompletionRoutine completionRoutine
    )
{
    UNREFERENCED_PARAMETER(uri);
    UNREFERENCED_PARAMETER(websocket);
    UNREFERENCED_PARAMETER(args);
    UNREFERENCED_PARAMETER(taskSubsystemId);
    UNREFERENCED_PARAMETER(taskGroupId);
    UNREFERENCED_PARAMETER(completionRoutineContext);
    UNREFERENCED_PARAMETER(completionRoutine);

    // TODO
    return HC_OK;
}

HC_RESULT Internal_HCWebSocketSendMessage(
    _In_ HC_WEBSOCKET_HANDLE websocket,
    _In_z_ PCSTR message,
    _In_ HC_SUBSYSTEM_ID taskSubsystemId,
    _In_ uint64_t taskGroupId,
    _In_opt_ void* completionRoutineContext,
    _In_opt_ HCWebSocketCompletionRoutine completionRoutine
    )
{
    UNREFERENCED_PARAMETER(websocket);
    UNREFERENCED_PARAMETER(message);
    UNREFERENCED_PARAMETER(taskSubsystemId);
    UNREFERENCED_PARAMETER(taskGroupId);
    UNREFERENCED_PARAMETER(completionRoutineContext);
    UNREFERENCED_PARAMETER(completionRoutine);

    // TODO
    return HC_OK;
}

HC_RESULT Internal_HCWebSocketClose(
    _In_ HC_WEBSOCKET_HANDLE websocket,
    _In_ HC_WEBSOCKET_CLOSE_STATUS closeStatus
    )
{
    UNREFERENCED_PARAMETER(websocket);
    UNREFERENCED_PARAMETER(closeStatus);

    // TODO
    return HC_OK;
}


