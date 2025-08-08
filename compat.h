#ifndef __COMPAT_H
#define __COMPAT_H

#include <linux/version.h>

/* Kernel 6.8+ removed dev_type from hci_dev structure */
#if LINUX_VERSION_CODE >= KERNEL_VERSION(6, 8, 0)
/* dev_type is no longer used, these constants are obsolete */
#ifndef HCI_PRIMARY
#define HCI_PRIMARY 0x00
#endif
#ifndef HCI_AMP
#define HCI_AMP 0x01
#endif
#endif

/* Kernel 6.8+ removed HCI_QUIRK_VALID_LE_STATES */
#if LINUX_VERSION_CODE >= KERNEL_VERSION(6, 8, 0)
#ifndef HCI_QUIRK_VALID_LE_STATES
/* This quirk is no longer needed in newer kernels */
#define HCI_QUIRK_VALID_LE_STATES 0
#endif
#endif

/* Additional compatibility for kernel 6.14+ */
#if LINUX_VERSION_CODE >= KERNEL_VERSION(6, 14, 0)
/* Add any 6.14+ specific compatibility fixes here */
#endif

#endif /* __COMPAT_H */