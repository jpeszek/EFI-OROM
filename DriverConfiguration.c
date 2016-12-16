/**@file
**/
#include <Uefi.h>
#include <Protocol/ComponentName.h>
#include <Protocol/DriverBinding.h>

#include "Template.h"

//
// EFI Driver Configuration Functions
//
EFI_STATUS
EFIAPI
TemplateDriverConfigurationSetOptions (
  IN  EFI_DRIVER_CONFIGURATION_PROTOCOL                      *This,
  IN  EFI_HANDLE                                             ControllerHandle,
  IN  EFI_HANDLE                                             ChildHandle  OPTIONAL,
  IN  CHAR8                                                  *Language,
  OUT EFI_DRIVER_CONFIGURATION_ACTION_REQUIRED               *ActionRequired
  );

EFI_STATUS
EFIAPI
TemplateDriverConfigurationOptionsValid (
  IN  EFI_DRIVER_CONFIGURATION_PROTOCOL               *This,
  IN  EFI_HANDLE                                      ControllerHandle,
  IN  EFI_HANDLE                                      ChildHandle  OPTIONAL
  );

EFI_STATUS
EFIAPI
TemplateDriverConfigurationForceDefaults (
  IN  EFI_DRIVER_CONFIGURATION_PROTOCOL                      *This,
  IN  EFI_HANDLE                                             ControllerHandle,
  IN  EFI_HANDLE                                             ChildHandle  OPTIONAL,
  IN  UINT32                                                 DefaultType,
  OUT EFI_DRIVER_CONFIGURATION_ACTION_REQUIRED               *ActionRequired
  );

//
// EFI Driver Configuration Protocol
//
EFI_DRIVER_CONFIGURATION_PROTOCOL gTemplateDriverConfiguration = {
  TemplateDriverConfigurationSetOptions,
  TemplateDriverConfigurationOptionsValid,
  TemplateDriverConfigurationForceDefaults,
  "eng"
};

EFI_STATUS
EFIAPI
TemplateDriverConfigurationSetOptions (
  IN  EFI_DRIVER_CONFIGURATION_PROTOCOL                      *This,
  IN  EFI_HANDLE                                             ControllerHandle,
  IN  EFI_HANDLE                                             ChildHandle  OPTIONAL,
  IN  CHAR8                                                  *Language,
  OUT EFI_DRIVER_CONFIGURATION_ACTION_REQUIRED               *ActionRequired
  )
{
  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
TemplateDriverConfigurationOptionsValid (
  IN  EFI_DRIVER_CONFIGURATION_PROTOCOL               *This,
  IN  EFI_HANDLE                                      ControllerHandle,
  IN  EFI_HANDLE                                      ChildHandle  OPTIONAL
  )
{
  return EFI_SUCCESS;
}

EFI_STATUS
EFIAPI
TemplateDriverConfigurationForceDefaults (
  IN  EFI_DRIVER_CONFIGURATION_PROTOCOL                      *This,
  IN  EFI_HANDLE                                             ControllerHandle,
  IN  EFI_HANDLE                                             ChildHandle  OPTIONAL,
  IN  UINT32                                                 DefaultType,
  OUT EFI_DRIVER_CONFIGURATION_ACTION_REQUIRED               *ActionRequired
  )
{
  return EFI_SUCCESS;
}
