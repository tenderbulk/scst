#include <linux/module.h>
#include <rdma/ib_mad.h>

static int __init modinit(void)
{
	return (uintptr_t)ib_set_cpi_resp_time;
}

module_init(modinit);

MODULE_LICENSE("GPL");
