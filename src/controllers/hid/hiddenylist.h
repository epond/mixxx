#pragma once

typedef struct hid_denylist {
    unsigned short vendor_id;
    unsigned short product_id;
    unsigned short usage_page;
    unsigned short usage;
    int interface_number;
} hid_denylist_t;

/// USB HID device that should not be recognized as controllers
hid_denylist_t hid_denylisted[] = {
        {0x5ac, 0x253, 0xff00, 0x1, -1}, // Apple laptop chassis
        {0x5ac, 0x8242, 0xc, 0x1, -1},   // Apple IR Remote Controller
        {0x1157, 0x300, 0x1, 0x2, -1},   // EKS Otus mouse pad (OS/X,windows)
        {0x1157, 0x300, 0x0, 0x0, 0x3},  // EKS Otus mouse pad (linux)
};

constexpr unsigned short kGenericDesktopUsagePage = 0x01;

constexpr unsigned short kGenericDesktopMouseUsage = 0x02;
constexpr unsigned short kGenericDesktopKeyboardUsage = 0x06;
