//===-- MIUtilSystemOsx.cpp -------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#if defined(__APPLE__)

// In-house headers:
#include "MIUtilSystemOsx.h"
#include "MICmnResources.h"

//++ ------------------------------------------------------------------------------------
// Details: CMIUtilSystemOsx constructor.
// Type:    Method.
// Args:    None.
// Return:  None.
// Throws:  None.
//--
CMIUtilSystemOsx::CMIUtilSystemOsx()
{
}

//++ ------------------------------------------------------------------------------------
// Details: CMIUtilSystemOsx destructor.
// Type:    Method.
// Args:    None.
// Return:  None.
// Throws:  None.
//--
CMIUtilSystemOsx::~CMIUtilSystemOsx()
{
}

//++ ------------------------------------------------------------------------------------
// Details: Retrieve the OS system error message for the given system error code.
// Type:    Method.
// Args:    vError		- (R) OS error code value.
//          vrwErrorMsg	- (W) The error message.
// Return:  MIstatus::success - Functional succeeded.
//          MIstatus::failure - Functional failed.
// Throws:  None.
//--
bool
CMIUtilSystemOsx::GetOSErrorMsg(const MIint vError, CMIUtilString &vrwErrorMsg) const
{
    // Reset
    vrwErrorMsg.clear();

    bool bOk = MIstatus::failure;

    // ToDo: Implement LINUX version

    return bOk;
}

//++ ------------------------------------------------------------------------------------
// Details: Retrieve if possible the OS last error description.
// Type:    Method.
// Args:    None.
// Return:  CMIUtilString - Error description.
// Throws:  None.
//--
CMIUtilString
CMIUtilSystemOsx::GetOSLastError() const
{
    CMIUtilString errorMsg("Error fn not implemented");

    // ToDo: Implement LINUX version

    return errorMsg;
}

//++ ------------------------------------------------------------------------------------
// Details: Retrieves the fully qualified path for the this application. If the function
//          fails the string is filled with the error message.
// Type:    Method.
// Args:    vrwFileNamePath	- (W) The executable's name and path or last error description.
// Return:  MIstatus::success - Functional succeeded.
//          MIstatus::failure - Functional failed.
// Throws:  None.
//--
bool
CMIUtilSystemOsx::GetExecutablesPath(CMIUtilString &vrwFileNamePath) const
{
    vrwFileNamePath = CMIUtilString(".");
    return MIstatus::success;
}

//++ ------------------------------------------------------------------------------------
// Details: Retrieves the fully qualified path for the Log file for this application.
//          If the function fails the string is filled with the error message.
//          Append a dummy file name on the end of the path. This will be stripped off
//          later and the real log file name replaces it.
// Type:    Method.
// Args:    vrwFileNamePath	- (W) The Log file's name and path or last error description.
// Return:  MIstatus::success - Functional succeeded.
//          MIstatus::failure - Functional failed.
// Throws:  None.
//--
bool
CMIUtilSystemOsx::GetLogFilesPath(CMIUtilString &vrwFileNamePath) const
{
    vrwFileNamePath = CMIUtilString(".");
    return MIstatus::success;
}

#endif // #if defined( __APPLE__ )
