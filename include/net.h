#ifndef NET_H
#define NET_H

#include "efi.h"

EFI_STATUS connect_to_network(EFI_SYSTEM_TABLE *SystemTable);
EFI_STATUS import_files_from_network(EFI_SYSTEM_TABLE *SystemTable);

#endif
