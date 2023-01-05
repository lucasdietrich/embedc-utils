#ifndef _ROUTES_H_
#define _ROUTES_H_

#include <stddef.h>
#include <embedc-url/parser.h>

extern const struct route_descr *const routes_root;
extern const size_t routes_root_size;

void web_server_index_html(void);
void web_server_files_html(void);
void rest_info(void);
void rest_flash_credentials_list(void);
void prometheus_metrics(void);
void prometheus_metrics_controller(void);
void prometheus_metrics_demo(void);
void rest_devices_list(void);
void rest_room_devices_list(void);
void rest_xiaomi_records(void);
void rest_caniot_records(void);
void rest_ha_stats(void);
void http_file_upload(void);
void http_file_download(void);
void rest_fs_list_lua_scripts(void);
void rest_fs_remove_lua_script(void);
void rest_lua_run_script(void);
void rest_demo_json(void);
void http_dfu_image_upload_response(void);
void http_dfu_image_upload(void);
void http_dfu_status(void);
void rest_devices_garage_get(void);
void rest_devices_garage_post(void);
void rest_devices_caniot_blc0_command(void);
void rest_devices_caniot_blc1_command(void);
void rest_devices_caniot_blc_command(void);
void rest_devices_caniot_telemetry(void);
void rest_devices_caniot_command(void);
void rest_devices_caniot_attr_read_write(void);
void rest_if_can(void);
void http_test_messaging(void);
void http_test_streaming(void);
void http_test_echo(void);
void http_test_big_payload(void);
void http_test_headers(void);
void http_test_payload(void);

#endif /* _ROUTES_H_ */