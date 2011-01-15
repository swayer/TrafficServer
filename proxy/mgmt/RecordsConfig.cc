/** @file

  A brief file description

  @section license License

  Licensed to the Apache Software Foundation (ASF) under one
  or more contributor license agreements.  See the NOTICE file
  distributed with this work for additional information
  regarding copyright ownership.  The ASF licenses this file
  to you under the Apache License, Version 2.0 (the
  "License"); you may not use this file except in compliance
  with the License.  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 */


#include "ink_config.h"
#include "RecordsConfig.h"
#include "Main.h"

//-------------------------------------------------------------------------
// RecordsConfig
//-------------------------------------------------------------------------

RecordElement RecordsConfig[] = {
  //##############################################################################
  //#
  //# records.config items
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.product_company", RECD_STRING, "Apache Software Foundation", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.product_vendor", RECD_STRING, "Apache", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.product_name", RECD_STRING, "Traffic Server", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cop_name", RECD_STRING, "Traffic Cop", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.manager_name", RECD_STRING, "Traffic Manager", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.server_name", RECD_STRING, "Traffic Server", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.proxy_name", RECD_STRING, "<proxy_name>", RECU_DYNAMIC, RR_REQUIRED, RECC_STR, ".+", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.bin_path", RECD_STRING, "bin", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.proxy_binary", RECD_STRING, "traffic_server", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.manager_binary", RECD_STRING, "traffic_manager", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,                             // required for traffic_cop
  {RECT_CONFIG, "proxy.config.cli_binary", RECD_STRING, "traffic_line", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,                             // required for mrtg
  {RECT_CONFIG, "proxy.config.watch_script", RECD_STRING, "traffic_cop", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,                             // required for mrtg
  {RECT_CONFIG, "proxy.config.proxy_binary_opts", RECD_STRING, "-M", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.start_script", RECD_STRING, "start", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.env_prep", RECD_STRING, "example_prep.sh", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.config_dir", RECD_STRING, "etc/trafficserver", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  // Jira TS-21
  {RECT_CONFIG, "proxy.config.local_state_dir", RECD_STRING, "var/trafficserver", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.temp_dir", RECD_STRING, "/tmp", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.alarm_email", RECD_STRING, TS_PKGSYSUSER, RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.syslog_facility", RECD_STRING, "LOG_DAEMON", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Negative core limit means max out limit
  {RECT_CONFIG, "proxy.config.core_limit", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.stack_dump_enabled", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cop.core_signal", RECD_INT, "0", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,                             // needed by traffic_cop
  {RECT_CONFIG, "proxy.config.cop.linux_min_swapfree_kb", RECD_INT, "10240", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,                             // needed by traffic_cop
  {RECT_CONFIG, "proxy.config.cop.linux_min_memfree_kb", RECD_INT, "10240", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,                             // needed by traffic_cop
  //# 0 = disable (seconds)
  {RECT_CONFIG, "proxy.config.dump_mem_info_frequency", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# 0 = disable
  {RECT_CONFIG, "proxy.config.http_ui_enabled", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.max_disk_errors", RECD_INT, "5", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# 0 = disable
  {RECT_CONFIG, "proxy.config.history_info_enabled", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# 0 = disable
  {RECT_CONFIG, "proxy.config.process_state_dump_mode", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.output.logfile", RECD_STRING, "traffic.out", RECU_RESTART_TC, RR_REQUIRED, RECC_NULL, NULL,
   RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.snapshot_dir", RECD_STRING, "snapshot", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net_snapshot_filename", RECD_STRING, "net.config.xml", RECU_NULL, RR_NULL, RECC_NULL, NULL,
   RECA_NULL}
  ,
  //# 0 = disable
  {RECT_CONFIG, "proxy.config.res_track_memory", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //##############################################################################
  //# Traffic Server system settings
  //##############################################################################
  // The maximum number of chunks to allocate with mmap. Setting this to zero disables all use of mmap. (Unix only)
  {RECT_CONFIG, "proxy.config.system.mmap_max", RECD_INT, "1073741823", RECU_RESTART_TS, RR_NULL, RECC_INT, NULL, RECA_READ_ONLY}
  ,
  // Traffic Server Execution threads configuration
  // By default Traffic Server set number of execution threads equal to total CPUs
  {RECT_CONFIG, "proxy.config.exec_thread.autoconfig", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-65535]", RECA_READ_ONLY}
  ,
  {RECT_CONFIG, "proxy.config.exec_thread.autoconfig.scale", RECD_FLOAT, "2.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_READ_ONLY}
  ,
  {RECT_CONFIG, "proxy.config.exec_thread.limit", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_INT, "[1-1024]", RECA_READ_ONLY}
  ,
  {RECT_CONFIG, "proxy.config.accept_threads", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_READ_ONLY}
  ,
  {RECT_CONFIG, "proxy.config.task_threads", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-99999]", RECA_READ_ONLY}
  ,
  {RECT_CONFIG, "proxy.config.thread.default.stacksize", RECD_INT, "1048576", RECU_RESTART_TS, RR_NULL, RECC_INT, "[131072-104857600]", RECA_READ_ONLY}
  ,
  {RECT_CONFIG, "proxy.config.user_name", RECD_STRING, "nobody", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Connection Collapsing
  //#
  //# 1. hashtable_enabled: if set to 1, requests will first search the
  //#    hashtable to see if another similar request is already being served.
  //# 2. rww_wait_time: read-while-write wait time: While read while write is
  //#    enabled, the secondary clients will wait this amount of time after which
  //#    cache lookup is retried.
  //# 3. revaildate_window_period: while revaidation of a cached object is being
  //#    done, the secondary clients for the same url will serve the stale object for
  //#    this amount of time, after the revalidation had started.
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.connection_collapsing.hashtable_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.connection_collapsing.rww_wait_time", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.connection_collapsing.revalidate_window_period", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Support for SRV records
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.srv_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Support for disabling check for Accept-* / Content-* header mismatch
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.http.cache.ignore_accept_mismatch", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.ignore_accept_language_mismatch", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.ignore_accept_encoding_mismatch", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.ignore_accept_charset_mismatch", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Redirection
  //#
  //# 1. redirection_enabled: if set to 1, redirection is enabled.
  //# 2. number_of_redirectionse: The maximum number of redirections TS permits
  //# 3. post_copy_size: The maximum POST data size TS permits to copy
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.http.redirection_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.number_of_redirections", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.post_copy_size", RECD_INT, "2048", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Diagnostics
  //#
  //# Enable by setting proxy.config.diags.debug.enabled to 1
  //# Route each type of diagnostic with a string, each character representing:
  //#    O  stdout
  //#    E  stderr
  //#    S  syslog
  //#    L  diags.log
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.diags.debug.enabled", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.debug.tags", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.action.enabled", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.action.tags", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.show_location", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.diag", RECD_STRING, "E", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.debug", RECD_STRING, "E", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.status", RECD_STRING, "E", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.note", RECD_STRING, "E", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.warning", RECD_STRING, "E", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.error", RECD_STRING, "SE", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.fatal", RECD_STRING, "SE", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.alert", RECD_STRING, "E", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.diags.output.emergency", RECD_STRING, "SE", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Local Manager
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.lm.pserver_timeout_secs", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.lm.pserver_timeout_msecs", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.lm.sem_id", RECD_INT, "11452", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,                             // needed by cop
  {RECT_CONFIG, "proxy.config.cluster.delta_thresh", RECD_INT, "30", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.peer_timeout", RECD_INT, "30", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.startup_timeout", RECD_INT, "10", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# cluster type requires restart to change
  //# 1 is full clustering, 2 is mgmt only, 3 is no clustering
  {RECT_LOCAL, "proxy.local.cluster.type", RECD_INT, "3", RECU_RESTART_TM, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.rsport", RECD_INT, "8088", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.mcport", RECD_INT, "8089", RECU_DYNAMIC, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.mc_group_addr", RECD_STRING, "224.0.1.37", RECU_DYNAMIC, RR_REQUIRED, RECC_IP, "[0-255]\\.[0-255]\\.[0-255]\\.[0-255]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.mc_ttl", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.log_bogus_mc_msgs", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.web_interface_port", RECD_INT, "8081", RECU_RESTART_TM, RR_REQUIRED, RECC_INT, "[0-65535]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.autoconf_port", RECD_INT, "8083", RECU_RESTART_TM, RR_REQUIRED, RECC_INT, "[0-65535]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.autoconf.localhost_only", RECD_INT, "0", RECU_RESTART_TM, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.autoconf.pac_filename", RECD_STRING, "proxy.pac", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.autoconf.wpad_filename", RECD_STRING, "wpad.dat", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  // overseer_mode: 0 disabled, 1 monitor only (get), 2 full acces (get, set, reread, bounce, restart)
  {RECT_CONFIG, "proxy.config.admin.overseer_mode", RECD_INT, "0", RECU_RESTART_TM, RR_NULL, RECC_INT, "[0-2]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.overseer_port", RECD_INT, "9898", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.admin_user", RECD_STRING, "<admin_user_name>", RECU_DYNAMIC, RR_REQUIRED, RECC_STR, ".+", RECA_NO_ACCESS}
  ,
  {RECT_CONFIG, "proxy.config.admin.admin_password", RECD_STRING, "<admin_user_password>", RECU_DYNAMIC, RR_REQUIRED, RECC_STR, ".*", RECA_NO_ACCESS}
  ,
  {RECT_CONFIG, "proxy.config.feature_set", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.basic_auth", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.use_ssl", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.ssl_cert_file", RECD_STRING, "private_key.pem", RECU_RESTART_TM, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.number_config_bak", RECD_INT, "3", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.user_id", RECD_STRING, TS_PKGSYSUSER, RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.ui_refresh_rate", RECD_INT, "30", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.load_factor", RECD_FLOAT, "250.00", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.log_mgmt_access", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.log_resolve_hostname", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.ip_allow.filename", RECD_STRING, "mgmt_allow.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.advanced_ui", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.cli_enabled", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.cli_path", RECD_STRING, "cli", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.cli_port", RECD_INT, "9000", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.lang_dict", RECD_STRING, "english.dict", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.session", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.admin.session.timeout", RECD_INT, "600", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# UDP configuration stuff: hidden variables
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.udp.free_cancelled_pkts_sec", RECD_INT, "10", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.udp.periodic_cleanup", RECD_INT, "10", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.udp.send_retries", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Bandwith Management file
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.bandwidth_mgmt.filename", RECD_STRING, "bandwidth_mgmt_xml.config", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Process Manager
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.process_manager.timeout", RECD_INT, "5", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.process_manager.enable_mgmt_port", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.process_manager.mgmt_port", RECD_INT, "8084", RECU_NULL, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Virtual IP Manager
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.vmap.enabled", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.vmap.addr_file", RECD_STRING, "vaddrs.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.vmap.down_up_timeout", RECD_INT, "10", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ping.npacks_to_trans", RECD_INT, "5", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ping.timeout_sec", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Alarm Configuration
  //#
  //##############################################################################
  //        #################################################################
  //        # execute alarm as "<abs_path>/<bin> "<MSG_STRING_FROM_PROXY>"" #
  //        #################################################################
  {RECT_CONFIG, "proxy.config.alarm.bin", RECD_STRING, "example_alarm_bin.sh", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.alarm.abs_path", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.alarm.script_runtime", RECD_INT, "5", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-300]", RECA_NULL}
  ,

  //####################################################################
  //# congestion control
  //####################################################################
  {RECT_CONFIG, "proxy.config.http.congestion_control.enabled", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.localtime", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.filename", RECD_STRING, "congestion.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.max_connection_failures", RECD_INT, "5", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.fail_window", RECD_INT, "120", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.proxy_retry_interval", RECD_INT, "10", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.client_wait_interval", RECD_INT, "300", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.wait_interval_alpha", RECD_INT, "30", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.live_os_conn_timeout", RECD_INT, "60", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.live_os_conn_retries", RECD_INT, "2", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.dead_os_conn_timeout", RECD_INT, "15", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.dead_os_conn_retries", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.max_connection", RECD_INT, "-1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.error_page", RECD_STRING, "congestion#retryAfter", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.congestion_control.default.congestion_scheme", RECD_STRING, "per_ip", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //        ###########
  //        # Parsing #
  //        ###########
  {RECT_CONFIG, "proxy.config.header.parse.no_host_url_redirect", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,

  //##############################################################################
  //#
  //# userName Cache
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.username.cache.enabled", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_NULL, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.username.cache.filename", RECD_STRING, "username.db", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.username.cache.size", RECD_INT, "5000", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.username.cache.storage_path", RECD_STRING, "var/trafficserver", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.username.cache.storage_size", RECD_INT, "15728640", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# HTTP Engine
  //#
  //##############################################################################
  //        ##########
  //        # basics #
  //        ##########
  //       #
  //       # The main server_port is listed here, other server ports is a
  //       # string of ports, separated by whitespace.
  //       #
  //       # The port attributes should be set to X(default behavior). For
  //       # example ...server_other_ports STRING 1234:X 12345:X
  //       #
  {RECT_CONFIG, "proxy.config.http.enabled", RECD_INT, "1", RECU_RESTART_TM, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.server_port", RECD_INT, "8080", RECU_RESTART_TM, RR_REQUIRED, RECC_INT, "[0-65535]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.server_port_attr", RECD_STRING, "X", RECU_RESTART_TM, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.server_other_ports", RECD_STRING, NULL, RECU_RESTART_TM, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.insert_request_via_str", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.insert_response_via_str", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //        # verbose via string
  //        #
  //        # 0 - no extra info added to string
  //        # 1 - all extra information added
  //        # 2 - some extra info added
  {RECT_CONFIG, "proxy.config.http.verbose_via_str", RECD_INT, "2", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.request_via_str", RECD_STRING, "ApacheTrafficServer/" PACKAGE_VERSION, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.response_via_str", RECD_STRING, "ApacheTrafficServer/" PACKAGE_VERSION, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.response_server_enabled", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, "[0-3]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.response_server_str", RECD_STRING, "ATS/" PACKAGE_VERSION, RECU_DYNAMIC, RR_NULL, RECC_NULL, ".*", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.enable_url_expandomatic", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.no_dns_just_forward_to_parent", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.uncacheable_requests_bypass_parent", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.no_origin_server_dns", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.use_client_target_addr", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.keep_alive_enabled", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.keep_alive_post_out", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.chunking_enabled", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.session_auth_cache_keep_alive_enabled", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # Send http11 requests
  //       #
  //       #   0 - Never
  //       #   1 - Always
  //       #   2 - if the server has returned http1.1 before
  //       #   3 - if the client request is 1.1 & the server
  //       #         has returned 1.1 before
  //       #
  {RECT_CONFIG, "proxy.config.http.send_http11_requests", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       #  origin_server_pipeline and user_agent_pipeline
  //       #
  //       #  0      - no keepalive
  //       #  n >= 1 - max pipeline window
  //       #           (1 is the same HTTP/1.0 keepalive)
  //       #
  {RECT_CONFIG, "proxy.config.http.origin_server_pipeline", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.user_agent_pipeline", RECD_INT, "4", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.share_server_sessions", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.wuts_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.log_spider_codes", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.record_heartbeat", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.record_tcp_mem_hit", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.default_buffer_size", RECD_INT, "8", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.default_buffer_water_mark", RECD_INT, "32768", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.enable_http_info", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.server_max_connections", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.origin_max_connections", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.origin_min_keep_alive_connections", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "^[0-9]+$", RECA_NULL}
  ,

  //       ##########################
  //       # HTTP referer filtering #
  //       ##########################
  {RECT_CONFIG, "proxy.config.http.referer_filter", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.referer_format_redirect", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.referer_default_redirect", RECD_STRING, "http://www.apache.org", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //       ##########################################################
  //       # HTTP Accept-Encoding filtering (depends on User-Agent) #
  //       ##########################################################
  {RECT_CONFIG, "proxy.config.http.accept_encoding_filter_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.accept_encoding_filter.filename", RECD_STRING, "ae_ua.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //       ########################
  //       # HTTP Quick filtering #
  //       ########################
  //       This is dedicated and very specific 'HTTP method' filter.
  //       Note: If method does not match, filtering will be skipped.
  //       bits 15-0 - HTTP method mask
  //            0x0000 - Any possible HTTP method (or you can use 0xFFFF)
  //            0x0001 - CONNECT
  //            0x0002 - DELETE
  //            0x0004 - GET
  //            0x0008 - HEAD
  //            0x0010 - ICP_QUERY
  //            0x0020 - OPTIONS
  //            0x0040 - POST
  //            0x0080 - PURGE
  //            0x0100 - PUT
  //            0x0200 - TRACE
  //            0x0400 - PUSH
  //       bits 18-16 - reserved
  //       bits 30-17 - reserved
  //       bit 31 - Action (allow=1, deny=0)
  //       Note: if 'proxy.config.http.quick_filter.mask' is equal 0, there is no 'quick http filtering' at all
  {RECT_CONFIG, "proxy.config.http.quick_filter.mask", RECD_INT, "0x482", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //        ##############################
  //        # parent proxy configuration #
  //        ##############################
  {RECT_CONFIG, "proxy.config.http.parent_proxy_routing_enable", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.parent_proxies", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.parent_proxy.file", RECD_STRING, "parent.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.parent_proxy.retry_time", RECD_INT, "300", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Parent fail threshold is the number of request that must fail within
  //#  the retry window for the parent to be marked down
  {RECT_CONFIG, "proxy.config.http.parent_proxy.fail_threshold", RECD_INT, "10", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.parent_proxy.total_connect_attempts", RECD_INT, "4", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.parent_proxy.per_parent_connect_attempts", RECD_INT, "2", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.parent_proxy.connect_attempts_timeout", RECD_INT, "30", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.forward.proxy_auth_to_parent", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //        ###################################
  //        # NO DNS DOC IN CACHE             #
  //        ###################################
  {RECT_CONFIG, "proxy.config.http.doc_in_cache_skip_dns", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,

  //        ###################################
  //        # HTTP connection timeouts (secs) #
  //        ###################################
  //       #
  //       # out: proxy -> os connection
  //       # in : ua -> proxy connection
  //       #
  {RECT_CONFIG, "proxy.config.http.keep_alive_no_activity_timeout_in", RECD_INT, "10", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.keep_alive_no_activity_timeout_out", RECD_INT, "10", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.transaction_no_activity_timeout_in", RECD_INT, "120", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.transaction_no_activity_timeout_out", RECD_INT, "120", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.transaction_active_timeout_in", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.transaction_active_timeout_out", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.accept_no_activity_timeout", RECD_INT, "120", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.background_fill_active_timeout", RECD_INT, "60", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.background_fill_completed_threshold", RECD_FLOAT, "0.5", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //        ##################################
  //        # origin server connect attempts #
  //        ##################################
  {RECT_CONFIG, "proxy.config.http.connect_attempts_max_retries", RECD_INT, "6", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.connect_attempts_max_retries_dead_server", RECD_INT, "2", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.connect_attempts_rr_retries", RECD_INT, "2", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.connect_attempts_timeout", RECD_INT, "30", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.post_connect_attempts_timeout", RECD_INT, "1800", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.down_server.cache_time", RECD_INT, "900", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.down_server.abort_threshold", RECD_INT, "10", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.negative_revalidating_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.negative_revalidating_lifetime", RECD_INT, "1800", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.negative_caching_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.negative_caching_lifetime", RECD_INT, "1800", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //        #########################
  //        # proxy users variables #
  //        #########################
  {RECT_CONFIG, "proxy.config.http.anonymize_remove_from", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.anonymize_remove_referer", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.anonymize_remove_user_agent", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.anonymize_remove_cookie", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.anonymize_remove_client_ip", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.anonymize_insert_client_ip", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.append_xforwards_header", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.anonymize_other_header_list", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.snarf_username_from_authorization", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.insert_squid_x_forwarded_for", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.insert_age_in_response", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.avoid_content_spoofing", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.enable_http_stats", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.normalize_ae_gzip", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,

  //        ####################################################
  //        # Global User-Agent header                         #
  //        ####################################################
  {RECT_CONFIG, "proxy.config.http.global_user_agent_header", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,

  //        ############
  //        # security #
  //        ############
  {RECT_CONFIG, "proxy.config.http.request_header_max_size", RECD_INT, "131072", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.response_header_max_size", RECD_INT, "131072", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.push_method_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,

  //        #################
  //        # cache control #
  //        #################
  {RECT_CONFIG, "proxy.config.http.cache.http", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.ignore_client_no_cache", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.ignore_client_cc_max_age", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.ims_on_client_no_cache", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.ignore_server_no_cache", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # cache responses to cookies has 4 options
  //       #
  //       #  0 - do not cache any responses to cookies
  //       #  1 - cache for any content-type (ignore cookies)
  //       #  2 - cache only for image types
  //       #  3 - cache for all but text content-types
  //       #  4 - cache for all but text content-types except OS response without "Set-Cookie" or with "Cache-Control: public"
  {RECT_CONFIG, "proxy.config.http.cache.cache_responses_to_cookies", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-4]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.ignore_authentication", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.cache_urls_that_look_dynamic", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.enable_default_vary_headers", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.max_open_read_retries", RECD_INT, "2", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.open_read_retry_time", RECD_INT, "100", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.max_open_write_retries", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.open_write_retry_time", RECD_INT, "500", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       #  when_to_revalidate has 4 options:
  //       #
  //       #  0 - default. use use cache directives or heuristic
  //       #  1 - stale if heuristic
  //       #  2 - always stale (always revalidate)
  //       #  3 - never stale
  //       #
  {RECT_CONFIG, "proxy.config.http.cache.when_to_revalidate", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # MSIE browsers currently don't send no-cache headers to
  //       # reverse proxies or transparent caches, this variable controls
  //       # when to add no-cache headers to MSIE requests:
  //       #
  //       #  0 - default; no-cache not added to MSIE requests
  //       #  1 - no-cache added to IMS MSIE requests
  //       #  2 - no-cache added to all MSIE requests
  {RECT_CONFIG, "proxy.config.http.cache.when_to_add_no_cache_to_msie_requests", RECD_INT, "-1", RECU_DYNAMIC, RR_NULL, RECC_INT, NULL, RECA_NULL}
  ,
  //
  //       #  required headers: three options
  //       #
  //       #  0 - No required headers to make document cachable
  //       #  1 - at least, "Last-Modified:" header required
  //       #  2 - explicit lifetime required, "Expires:" or "Cache-Control:"
  //       #
  {RECT_CONFIG, "proxy.config.http.cache.required_headers", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.max_stale_age", RECD_INT, "604800", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.range.lookup", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //        ########################
  //        # heuristic expiration #
  //        ########################
  {RECT_CONFIG, "proxy.config.http.cache.heuristic_min_lifetime", RECD_INT, "3600", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.heuristic_max_lifetime", RECD_INT, "86400", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.heuristic_lm_factor", RECD_FLOAT, "0.10", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.guaranteed_min_lifetime", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.guaranteed_max_lifetime", RECD_INT, "31536000", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.fuzz.time", RECD_INT, "240", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.fuzz.min_time", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.fuzz.probability", RECD_FLOAT, "0.005", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //        #########################################
  //        # dynamic content & content negotiation #
  //        #########################################
  {RECT_CONFIG, "proxy.config.http.cache.vary_default_text", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.vary_default_images", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.cache.vary_default_other", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,

  //        ###################
  //        # Error Reporting #
  //        ###################
  {RECT_CONFIG, "proxy.config.http.errors.log_error_pages", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.http.slow.log.threshold", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "^[0-9]+$", RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Customizable User Response Pages
  //#
  //##############################################################################
  //# 0 - turn off customizable user response pages
  //# 1 - enable customizable user response pages in only the "default" directory
  //# 2 - enable language-targeted user response pages
  {RECT_CONFIG, "proxy.config.body_factory.enable_customizations", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-2]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.body_factory.enable_logging", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.body_factory.template_sets_dir", RECD_STRING, "etc/trafficserver/body_factory", RECU_RESTART_TS, RR_NULL, RECC_STR, "^[^[:space:]]+$", RECA_NULL}
  ,
  //# 0 - never suppress generated responses
  //# 1 - always suppress generated responses
  //# 2 - suppress responses for intercepted traffic
  {RECT_CONFIG, "proxy.config.body_factory.response_suppression_mode", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-2]", RECA_NULL}
  ,

  //##############################################################################
  //#
  //# SOCKS Processor
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.socks.socks_needed", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.socks_version", RECD_INT, "4", RECU_RESTART_TS, RR_NULL, RECC_INT, "[4-5]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.socks_config_file", RECD_STRING, "socks.config", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.socks_timeout", RECD_INT, "100", RECU_RESTART_TS, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.server_connect_timeout", RECD_INT, "10", RECU_RESTART_TS, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.per_server_connection_attempts", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.connection_attempts", RECD_INT, "4", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.server_retry_timeout", RECD_INT, "300", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.default_servers", RECD_STRING, "", RECU_RESTART_TS, RR_NULL, RECC_STR, "^([^[:space:]]+:[0-9]+;?)*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.server_retry_time", RECD_INT, "300", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.server_fail_threshold", RECD_INT, "2", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.accept_enabled", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.accept_port", RECD_INT, "1080", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-65535]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.socks.http_port", RECD_INT, "80", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# I/O Subsystem
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.io.max_buffer_size", RECD_INT, "32768", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Net Subsystem
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.net.connections_throttle", RECD_INT, "10000", RECU_RESTART_TS, RR_REQUIRED, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.throttle_enabled", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.listen_backlog", RECD_INT, "1024", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.accept_throttle", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  // This option takes different defaults depending on features / platform. TODO: This should use the
  // autoconf stuff probably ?
  {RECT_CONFIG, "proxy.config.net.defer_accept", RECD_INT,
#ifdef TCP_DEFER_ACCEPT
   "45",
#else
   "1",
#endif
   RECU_DYNAMIC, RR_NULL, RECC_INT, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.sock_recv_buffer_size_in", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.sock_send_buffer_size_in", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.sock_option_flag_in", RECD_INT, "0x0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.sock_recv_buffer_size_out", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.sock_send_buffer_size_out", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.sock_option_flag_out", RECD_INT, "0x0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.sock_mss_in", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.nt.main_accept_pool_size", RECD_INT, "500", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Cluster Subsystem
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.cluster.cluster_port", RECD_INT, "8086", RECU_RESTART_TS, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.cluster_configuration", RECD_STRING, "cluster.config", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.ethernet_interface", RECD_STRING, NULL, RECU_RESTART_TS, RR_REQUIRED, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.enable_monitor", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.monitor_interval_secs", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.send_buffer_size", RECD_INT, "10485760", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.receive_buffer_size", RECD_INT, "10485760", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.sock_option_flag", RECD_INT, "0x0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.rpc_cache_cluster", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##################################################################
  //# Cluster interconnect load monitoring configuration options.
  //# Internal use only
  //##################################################################
  //# load monitor_enabled: -1 = compute only, 0 = disable, 1 = compute and act
  {RECT_CONFIG, "proxy.config.cluster.load_monitor_enabled", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.ping_send_interval_msecs", RECD_INT, "100", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.ping_response_buckets", RECD_INT, "100", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.msecs_per_ping_response_bucket", RECD_INT, "50", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.ping_latency_threshold_msecs", RECD_INT, "500", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.load_compute_interval_msecs", RECD_INT, "5000", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.periodic_timer_interval_msecs", RECD_INT, "100", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.ping_history_buf_length", RECD_INT, "120", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.cluster_load_clear_duration", RECD_INT, "24", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cluster.cluster_load_exceed_duration", RECD_INT, "4", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Cache
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.cache.storage_filename", RECD_STRING, "storage.config", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.control.filename", RECD_STRING, "cache.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.ip_allow.filename", RECD_STRING, "ip_allow.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.hosting_filename", RECD_STRING, "hosting.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.partition_filename", RECD_STRING, "partition.config", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.permit.pinning", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.vary_on_user_agent", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //  # 0 - MD5 hash
  //  # 1 - MMH hash
  {RECT_CONFIG, "proxy.config.cache.url_hash_method", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //  # default the ram cache size to AUTO_SIZE (-1)
  //  # alternatively: 20971520 (20MB)
  {RECT_CONFIG, "proxy.config.cache.ram_cache.size", RECD_INT, "-1", RECU_RESTART_TS, RR_NULL, RECC_STR, "^-?[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.ram_cache.algorithm", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.ram_cache.compress", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.ram_cache.compress_percent", RECD_INT, "90", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //  # how often should the directory be synced (seconds)
  {RECT_CONFIG, "proxy.config.cache.dir.sync_frequency", RECD_INT, "60", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.hostdb.disable_reverse_lookup", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.select_alternate", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.ram_cache_cutoff", RECD_INT, "1048576", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //  # The maximum number of alternates that are allowed for any given URL.
  //  # It is not possible to strictly enforce this if the variable
  //  #   'proxy.config.cache.vary_on_user_agent' is set to 1.
  //  # (0 disables the maximum number of alts check)
  {RECT_CONFIG, "proxy.config.cache.limits.http.max_alts", RECD_INT, "5", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.force_sector_size", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.target_fragment_size", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //  # The maximum size of a document that will be stored in the cache.
  //  # (0 disables the maximum document size check)
  {RECT_CONFIG, "proxy.config.net.enable_ink_disk_io", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.ink_disk_io_watermark", RECD_INT, "400", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.ink_aio_write_threads", RECD_INT, "10", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.net.max_kqueue_len", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.max_doc_size", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.min_average_object_size", RECD_INT, "8000", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.max_agg_delay", RECD_INT, "1000", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.threads_per_disk", RECD_INT, "8", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.aio_sleep_time", RECD_INT, "100", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.check_disk_idle", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.agg_write_backlog", RECD_INT, "5242880", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.enable_checksum", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.alt_rewrite_max_size", RECD_INT, "4096", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.cache.enable_read_while_writer", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //  #
  //  # UNIMPLEMENTED cache config
  //  #
  //
  //# 0 - MD5 fingerprinting
  //# 1 - MMH fingerprinting
  //# 2 - No fingerprinting
  //# UNIMPLEMENTED CONFIG proxy.config.cache.fingerprint_method INT 2
  //# UNIMPLEMENTED: CONFIG proxy.config.cache.limits.http.quota FLOAT 1.0
  //# UNIMPLEMENTED: CONFIG proxy.config.cache.limits.rtsp.quota FLOAT 1.0

  //##############################################################################
  //#
  //# DNS
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.dns.lookup_timeout", RECD_INT, "20", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.retries", RECD_INT, "5", RECU_DYNAMIC, RR_NULL, RECC_NULL, "[0-9]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.search_default_domains", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.failover_number", RECD_INT, "5", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.failover_period", RECD_INT, "60", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.max_dns_in_flight", RECD_INT, "2048", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.validate_query_name", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.splitDNS.enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.splitdns.filename", RECD_STRING, "splitdns.config", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.url_expansions", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.nameservers", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.resolv_conf", RECD_STRING, "/etc/resolv.conf", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.round_robin_nameservers", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.dns.dedicated_thread", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_NULL, "[0-1]", RECA_NULL}
  ,

  //##############################################################################
  //#
  //# HostDB
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.hostdb", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # up to 511 characters, may not be changed while running
  {RECT_CONFIG, "proxy.config.hostdb.filename", RECD_STRING, "host.db", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # in entries, may not be changed while running
  {RECT_CONFIG, "proxy.config.hostdb.size", RECD_INT, "200000", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.hostdb.storage_path", RECD_STRING, "var/trafficserver", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.hostdb.storage_size", RECD_INT, "33554432", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # in minutes (all three)
  //       #  0 = obey, 1 = ignore, 2 = min(X,ttl), 3 = max(X,ttl)
  {RECT_CONFIG, "proxy.config.hostdb.ttl_mode", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.hostdb.lookup_timeout", RECD_INT, "120", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.hostdb.timeout", RECD_INT, "1440", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.hostdb.verify_after", RECD_INT, "720", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.hostdb.fail.timeout", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.hostdb.re_dns_on_reload", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.hostdb.serve_stale_for", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # move entries to the owner on a lookup?
  {RECT_CONFIG, "proxy.config.hostdb.migrate_on_demand", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # find DNS results on another node in the cluster?
  {RECT_CONFIG, "proxy.config.hostdb.cluster", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # find DNS results for round-robin hosts on another node in the cluster?
  {RECT_CONFIG, "proxy.config.hostdb.cluster.round_robin", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # round-robin addresses for single clients
  //       # (can cause authentication problems)
  {RECT_CONFIG, "proxy.config.hostdb.strict_round_robin", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //       # how often should the hostdb be synced (seconds)
  {RECT_CONFIG, "proxy.config.cache.hostdb.sync_frequency", RECD_INT, "60", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##########################################################################
  //#
  //# HTTP
  //#
  //##########################################################################
  //##########################################################################
  //        ###########
  //        # CONNECT #
  //        ###########
  {RECT_CONFIG, "proxy.config.http.connect_ports", RECD_STRING, "443 563", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[[:digit:][:space:]]+$", RECA_NULL}
  ,
  //        #########
  //        # Stats #
  //        #########
  //# frequency is in seconds
  {RECT_CONFIG, "proxy.config.stats.snap_frequency", RECD_INT, "60", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.stats.config_file", RECD_STRING, "stats.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  // Jira TS-21
  {RECT_CONFIG, "proxy.config.stats.snap_file", RECD_STRING, "stats.snap", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //        ###########
  //        # Parsing #
  //        ###########
  //##############################################################################
  //#
  //# New Logging Config
  //#
  //##############################################################################
  //# possible values for logging_enabled
  //# 0: no logging at all
  //# 1: log errors only
  //# 2: full logging
  {RECT_CONFIG, "proxy.config.log.logging_enabled", RECD_INT, "2", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-4]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.log_buffer_size", RECD_INT, "9216", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.max_entries_per_buffer", RECD_INT, "100", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.max_secs_per_buffer", RECD_INT, "5", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.max_space_mb_for_logs", RECD_INT, "2000", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.max_space_mb_for_orphan_logs", RECD_INT, "25", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.max_space_mb_headroom", RECD_INT, "10", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.hostname", RECD_STRING, "localhost", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.logfile_dir", RECD_STRING, "var/log/trafficserver", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[^[:space:]]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.logfile_perm", RECD_STRING, "rw-r--r--", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.custom_logs_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.xml_config_file", RECD_STRING, "logs_xml.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.hosts_config_file", RECD_STRING, "log_hosts.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.squid_log_enabled", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.squid_log_is_ascii", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.squid_log_name", RECD_STRING, "squid", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.squid_log_header", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.common_log_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.common_log_is_ascii", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.common_log_name", RECD_STRING, "common", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.common_log_header", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.extended_log_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.extended_log_is_ascii", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.extended_log_name", RECD_STRING, "extended", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.extended_log_header", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.extended2_log_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.extended2_log_is_ascii", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.extended2_log_name", RECD_STRING, "extended2", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.extended2_log_header", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.separate_icp_logs", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.separate_host_logs", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.collation_host", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.collation_port", RECD_INT, "8085", RECU_DYNAMIC, RR_REQUIRED, RECC_INT, "[0-65535]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.collation_secret", RECD_STRING, "foobar", RECU_DYNAMIC, RR_NULL, RECC_STR, ".*", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.collation_host_tagged", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.collation_retry_sec", RECD_INT, "5", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.collation_max_send_buffers", RECD_INT, "16", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.rolling_enabled", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-4]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.rolling_interval_sec", RECD_INT, "86400", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.rolling_offset_hr", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.rolling_size_mb", RECD_INT, "10", RECU_DYNAMIC, RR_NULL, RECC_STR, "^0*[1-9][0-9]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.auto_delete_rolled_files", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.sampling_frequency", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.space_used_frequency", RECD_INT, "2", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.file_stat_frequency", RECD_INT, "32", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.ascii_buffer_size", RECD_INT, "36864", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.max_line_size", RECD_INT, "9216", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.overspill_report_count", RECD_INT, "500", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.xuid_logging_enabled", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  // Begin  HCL Modifications.
  {RECT_CONFIG, "proxy.config.log.search_rolling_interval_sec", RECD_INT, "86400", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.search_log_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.search_server_ip_addr", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.search_server_port", RECD_INT, "8080", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.search_top_sites", RECD_INT, "100", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.search_url_filter", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.log.search_log_filters", RECD_STRING, NULL, RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  // End    HCL Modifications.

  //##############################################################################
  //#
  //# Reverse Proxy
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.reverse_proxy.enabled", RECD_INT, "<accel_enable>", RECU_DYNAMIC, RR_REQUIRED, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.url_remap.default_to_server_pac", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.url_remap.default_to_server_pac_port", RECD_INT, "-1", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.url_remap.filename", RECD_STRING, "remap.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.url_remap.remap_required", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.url_remap.pristine_host_hdr", RECD_INT, "1", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  // url remap mode
  // # 0 - same as URL_REMAP_ALL (instead of disabling all remapping)
  // # 1 - URL_REMAP_ALL remap url's of all requests
  // # 2 - URL_REMAP_FOR_OS remap url's for requests to OS's only
  {RECT_CONFIG, "proxy.config.url_remap.url_remap_mode", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-2]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.url_remap.handle_backdoor_urls", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# SSL Termination
  //#
  //##############################################################################
  {RECT_CONFIG, "proxy.config.ssl.enabled", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.SSLv2", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.SSLv3", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.TLSv1", RECD_INT, "1", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.accelerator_required", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.accelerator.type", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.number.threads", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.atalla.lib.path", RECD_STRING, "/opt/atalla/lib", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.ncipher.lib.path", RECD_STRING, "/opt/nfast/toolkits/hwcrhk", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.cswift.lib.path", RECD_STRING, "/usr/lib", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.broadcom.lib.path", RECD_STRING, "/usr/lib", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.server_port", RECD_INT, "443", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-65535]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.client.certification_level", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-2]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.server.cert.filename", RECD_STRING, "server.pem", RECU_RESTART_TS, RR_NULL, RECC_STR, "^[^[:space:]]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.server.cert.path", RECD_STRING, "etc/trafficserver", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.server.cert_chain.filename", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_STR, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.server.multicert.filename", RECD_STRING, "ssl_multicert.config", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.server.private_key.filename", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.server.private_key.path", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.CA.cert.filename", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.CA.cert.path", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.client.verify.server", RECD_INT, "0", RECU_RESTART_TS, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.client.cert.filename", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.client.cert.path", RECD_STRING, "etc/trafficserver", RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.client.private_key.filename", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.client.private_key.path", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.client.CA.cert.filename", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_STR, "^[^[:space:]]*$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.ssl.client.CA.cert.path", RECD_STRING, NULL, RECU_RESTART_TS, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //# ICP Configuration
  //##############################################################################
  //#       enabled=0 ICP disabled
  //#       enabled=1 Allow receive of ICP queries
  //#       enabled=2 Allow send/receive of ICP queries
  //##############################################################################
  {RECT_CONFIG, "proxy.config.icp.enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-2]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.stale_icp_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.icp_interface", RECD_STRING, NULL, RECU_RESTART_TS, RR_REQUIRED, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.icp_port", RECD_INT, "3130", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-65535]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.multicast_enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.query_timeout", RECD_INT, "2", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.icp_configuration", RECD_STRING, "icp.config", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.lookup_local", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.reply_to_unknown_peer", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.icp.default_reply_port", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //############################################################################
  //#
  //# WCCP
  //#
  //############################################################################
  {RECT_CONFIG, "proxy.config.wccp.addr", RECD_STRING, "", RECU_RESTART_TM, RR_NULL, RECC_STR, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.wccp.services", RECD_STRING, "", RECU_RESTART_TM, RR_NULL, RECC_STR, NULL, RECA_NULL }
  ,

  //##############################################################################
  //# Scheduled Update Configuration
  //##############################################################################
  {RECT_CONFIG, "proxy.config.update.enabled", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.update.update_configuration", RECD_STRING, "update.config", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.update.force", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-1]", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.update.retry_count", RECD_INT, "10", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.update.retry_interval", RECD_INT, "2", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.update.concurrent_updates", RECD_INT, "100", RECU_DYNAMIC, RR_NULL, RECC_STR, "^[0-9]+$", RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.update.max_update_state_machines", RECD_INT, "500", RECU_DYNAMIC, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.update.memory_use_mb", RECD_INT, "50", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //# Plug-in Configuration
  //##############################################################################
  //# Directory in which to find plugins
  {RECT_CONFIG, "proxy.config.plugin.plugin_dir", RECD_STRING, "libexec/trafficserver", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.plugin.plugin_mgmt_dir", RECD_STRING, "etc/trafficserver/plugins_mgmt", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.plugin.extensions_dir", RECD_STRING, "var/trafficserver", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# Local Manager Specific Records File
  //#
  //# <RECORD-TYPE> <NAME> <TYPE> <VALUE (till end of line)>
  //#
  //# Add NODE       Records Here
  //##############################################################################
  {RECT_NODE, "proxy.node.num_processes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.hostname_FQ", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.hostname", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.xact_scale", RECD_INT, "200", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //#
  //# Restart Stats
  //#
  {RECT_NODE, "proxy.node.restarts.manager.start_time", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.restarts.proxy.start_time", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.restarts.proxy.stop_time", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.restarts.proxy.restart_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //#
  //# Manager Version Info
  //#
  {RECT_NODE, "proxy.node.version.manager.short", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.version.manager.long", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.version.manager.build_number", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.version.manager.build_time", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.version.manager.build_date", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.version.manager.build_machine", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.version.manager.build_person", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //#
  //# SSL parent proxying info
  //#
  //# Set the value of this variable to 1 if this node
  //#  is also the default parent for all ssl requests
  //#  in a cluster. Setting the value to 1 will prevent
  //#  SSL requests from this proxy to a parent from
  //#  self-looping.
  //#
  {RECT_LOCAL, "proxy.local.http.parent_proxy.disable_connect_tunneling", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //#
  //# Dash Board Stats
  //#
  //# Valid Per Node - Can Not Sum For Cluster Stats
  //#
  {RECT_NODE, "proxy.node.http.cache_hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.bandwidth_hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.bandwidth_hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.bandwidth_hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.bandwidth_hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.hostdb.hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.hostdb.hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.proxy_running", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache.percent_free", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache_hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache_hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache_hit_ratio_avg_10s_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.bandwidth_hit_ratio_avg_10s_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //#
  //# Node page 5 minute average stats
  //# Valid Per Node - Can Not Sum For Cluster Stats
  //#
  {RECT_NODE, "proxy.node.bandwidth_hit_ratio_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_hit_fresh_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_hit_revalidated_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_hit_ims_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_hit_stale_served_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_miss_cold_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_miss_changed_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_miss_not_cacheable_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_miss_client_no_cache_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_miss_ims_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_read_error_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache_total_hits_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache_total_misses_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache_hit_ratio_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.hostdb.total_lookups_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.hostdb.total_hits_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.hostdb.hit_ratio_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //# Protocol Stats
  //#
  //# Valid Per Node - Can Not Sum For Cluster Stats
  //#
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.hit_fresh", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.hit_revalidated", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.miss_cold", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.miss_not_cacheable", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.miss_changed", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.miss_client_no_cache", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.errors.connect_failed", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.errors.aborts", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.errors.possible_aborts", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.errors.pre_accept_hangups", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.errors.early_hangups", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.errors.empty_hangups", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.errors.other", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_counts_avg_10s.other.unclassified", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.hit_fresh", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.hit_revalidated", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.miss_cold", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.miss_not_cacheable", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.miss_changed", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.miss_client_no_cache", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.connect_failed", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.aborts", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.possible_aborts", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.pre_accept_hangups", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.early_hangups", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.empty_hangups", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.other", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.other.unclassified", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.hit_fresh_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.hit_revalidated_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.miss_cold_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.miss_not_cacheable_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.miss_changed_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.miss_client_no_cache_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.connect_failed_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.aborts_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.possible_aborts_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.pre_accept_hangups_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.early_hangups_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.empty_hangups_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.errors.other_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_frac_avg_10s.other.unclassified_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.hit_fresh", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.hit_revalidated", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.miss_cold", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.miss_not_cacheable", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.miss_changed", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.miss_client_no_cache", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.errors.connect_failed", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.errors.aborts", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.errors.possible_aborts", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.errors.pre_accept_hangups", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.errors.early_hangups", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.errors.empty_hangups", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.errors.other", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.transaction_msec_avg_10s.other.unclassified", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //#
  //# Can Sum For Cluster Stats
  //#
  //
  //# HTTP
  {RECT_NODE, "proxy.node.http.throughput", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.user_agent_xacts_per_second", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.user_agent_current_connections_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.user_agent_total_request_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.user_agent_total_response_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.user_agents_total_transactions_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.user_agents_total_documents_served", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.origin_server_current_connections_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.origin_server_total_request_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.origin_server_total_response_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.parent_proxy_total_request_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.parent_proxy_total_response_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.origin_server_total_transactions_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_current_connections_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.current_parent_proxy_connections", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_total_hits", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.http.cache_total_misses", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Cache
  {RECT_NODE, "proxy.node.cache.contents.num_docs", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache.bytes_total", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache.bytes_total_mb", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache.bytes_free", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache.bytes_free_mb", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache.percent_free_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache_total_hits", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.cache_total_misses", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.current_cache_connections", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# DNS
  {RECT_NODE, "proxy.node.dns.lookups_per_second", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.dns.lookup_avg_time_ms", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.dns.total_dns_lookups", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# HostDB
  {RECT_NODE, "proxy.node.hostdb.total_lookups", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.hostdb.total_hits", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Cluster
  {RECT_NODE, "proxy.node.cluster.nodes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Overall
  {RECT_NODE, "proxy.node.client_throughput_out", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.client_throughput_out_kbit", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.current_client_connections", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.current_server_connections", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.user_agent_total_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.origin_server_total_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.user_agent_total_bytes_avg_10s", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.origin_server_total_bytes_avg_10s", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.user_agent_xacts_per_second", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_NODE, "proxy.node.user_agents_total_documents_served", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //#
  //# Add CLUSTER    Records Here
  //#
  //# For Node page
  {RECT_CLUSTER, "proxy.cluster.user_agent_total_bytes_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.origin_server_total_bytes_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.bandwidth_hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.bandwidth_hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.bandwidth_hit_ratio_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# HTTP
  {RECT_CLUSTER, "proxy.cluster.http.throughput", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.cache_hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.cache_hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.cache_total_hits", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.cache_total_misses", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.bandwidth_hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.bandwidth_hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.user_agent_xacts_per_second", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.user_agent_current_connections_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.user_agent_total_request_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.user_agent_total_response_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.user_agents_total_transactions_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.user_agents_total_documents_served", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.origin_server_current_connections_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.origin_server_total_request_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.origin_server_total_response_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.origin_server_total_transactions_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.cache_current_connections_count", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.current_parent_proxy_connections", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.parent_proxy_total_request_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.http.parent_proxy_total_response_bytes", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Cache
  {RECT_CLUSTER, "proxy.cluster.cache.contents.num_docs", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache.bytes_free", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache.bytes_free_mb", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache.percent_free", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache.percent_free_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache.bytes_free_mb", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache_hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache_hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache_total_hits", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache_total_misses", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.current_cache_connections", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache_total_hits_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache_total_misses_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.cache_hit_ratio_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# DNS
  {RECT_CLUSTER, "proxy.cluster.dns.lookups_per_second", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.dns.total_dns_lookups", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# HostDB
  {RECT_CLUSTER, "proxy.cluster.hostdb.hit_ratio", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.hostdb.hit_ratio_int_pct", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.hostdb.total_lookups_avg_10s", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.hostdb.total_hits_avg_10s", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.hostdb.hit_ratio_avg_10s", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Overall
  {RECT_CLUSTER, "proxy.cluster.user_agent_xacts_per_second", RECD_FLOAT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.client_throughput_out", RECD_FLOAT, "0.0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.client_throughput_out_kbit", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.current_client_connections", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CLUSTER, "proxy.cluster.current_server_connections", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Add LOCAL Records Here
  {RECT_LOCAL, "proxy.local.incoming_ip_to_bind", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_LOCAL, "proxy.local.outgoing_ip_to_bind", RECD_STRING, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_LOCAL, "proxy.local.log.collation_mode", RECD_INT, "0", RECU_DYNAMIC, RR_NULL, RECC_INT, "[0-4]", RECA_NULL}
  ,

  //#Prefetch configuration
  {RECT_CONFIG, "proxy.config.prefetch.prefetch_enabled", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.child_port", RECD_INT, "39679", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.config_file", RECD_STRING, "prefetch.config", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.url_buffer_size", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.url_buffer_timeout", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.keepalive_timeout", RECD_INT, "900", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.push_cached_objects", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.default_url_proto", RECD_STRING, "tcp", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.default_data_proto", RECD_STRING, "tcp", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.max_object_size", RECD_INT, "1000000000", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.max_recursion", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.prefetch.redirection", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  //# Librecords based stats system (new as of v2.1.3)
  {RECT_CONFIG, "proxy.config.stat_api.max_stats_allowed", RECD_INT, "256", RECU_RESTART_TS, RR_NULL, RECC_INT, "[256-1000]", RECA_NULL}
  ,
#if TS_HAS_V2STATS
  // StatSystemV2 config
  {RECT_CONFIG, "proxy.config.stat_collector.interval", RECD_INT, "600", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.stat_collector.port", RECD_INT, "8091", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.stat_systemV2.max_stats_allowed", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.stat_systemV2.num_stats_estimate", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
#endif

  //############
  //#
  //# Eric's super cool remap processor
  //#
  //############
  {RECT_CONFIG, "proxy.config.remap.use_remap_processor", RECD_INT, "0", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,
  {RECT_CONFIG, "proxy.config.remap.num_remap_threads", RECD_INT, "1", RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
  ,

  //##############################################################################
  //#
  //# The End
  //#
  //##############################################################################
  {RECT_CONFIG, NULL, RECD_NULL, NULL, RECU_NULL, RR_NULL, RECC_NULL, NULL, RECA_NULL}
};


#ifndef FOR_INSTALL

//-------------------------------------------------------------------------
// LibRecordsConfigInit
//-------------------------------------------------------------------------
void
LibRecordsConfigInit()
{
  int r = 0;
  RecInt tempInt = 0;
  RecFloat tempFloat = 0.0;
  RecCounter tempCounter = 0;

  RecUpdateT update;
  RecCheckT check;
  RecAccessT access;
  RecT type;

  for (r = 0; RecordsConfig[r].value_type != RECD_NULL; r++) {
    // Less typing ...
    type = RecordsConfig[r].type;
    update = RecordsConfig[r].update;
    check = RecordsConfig[r].check;
    access = RecordsConfig[r].access;

    if (type == RECT_CONFIG || type == RECT_LOCAL) {
      switch (RecordsConfig[r].value_type) {
      case RECD_INT:
        tempInt = (RecInt) ink_atoi64(RecordsConfig[r].value);
        RecRegisterConfigInt(type, RecordsConfig[r].name, tempInt, update, check, RecordsConfig[r].regex, access);
        break;

      case RECD_FLOAT:
        tempFloat = (RecFloat) atof(RecordsConfig[r].value);
        RecRegisterConfigFloat(type, RecordsConfig[r].name, tempFloat, update, check, RecordsConfig[r].regex, access);
        break;

      case RECD_STRING:
        RecRegisterConfigString(type, RecordsConfig[r].name, RecordsConfig[r].value, update, check,
                                RecordsConfig[r].regex, access);
        break;

      case RECD_COUNTER:
        tempCounter = (RecCounter) ink_atoi64(RecordsConfig[r].value);
        RecRegisterConfigCounter(type, RecordsConfig[r].name, tempCounter, update, check,
                                 RecordsConfig[r].regex, access);
        break;

      default:
        ink_debug_assert(true);
        break;

      }                         // switch
    } else { // Everything else, except PROCESS, are stats. TODO: Should modularize this too like PROCESS was done.
      switch (RecordsConfig[r].value_type) {

      case RECD_INT:
        tempInt = (RecInt) ink_atoi64(RecordsConfig[r].value);
        RecRegisterStatInt(type, RecordsConfig[r].name, tempInt, RECP_NON_PERSISTENT);
        break;

      case RECD_FLOAT:
        tempFloat = (RecFloat) atof(RecordsConfig[r].value);
        RecRegisterStatFloat(type, RecordsConfig[r].name, tempFloat, RECP_NON_PERSISTENT);
        break;

      case RECD_STRING:
        RecRegisterStatString(type, RecordsConfig[r].name, (RecString)RecordsConfig[r].value, RECP_NON_PERSISTENT);
        break;

      case RECD_COUNTER:
        tempCounter = (RecCounter) ink_atoi64(RecordsConfig[r].value);
        RecRegisterStatCounter(type, RecordsConfig[r].name, tempCounter, RECP_NON_PERSISTENT);
        break;

      default:
        ink_debug_assert(true);
        break;
      }                         // switch
    }
  }

  // test_librecords();
}

void
test_librecords()
{
  RecRegisterStatInt(RECT_PROCESS, "proxy.process.librecords.testing.int", (RecInt) 100, RECP_NON_PERSISTENT);
  RecRegisterStatFloat(RECT_NODE, "proxy.node.librecords.testing.float", (RecFloat) 100.1, RECP_NON_PERSISTENT);
  RecRegisterStatString(RECT_CLUSTER, "proxy.cluster.librecords.testing.string", (RecString) "Hello World\n", RECP_NON_PERSISTENT);
  RecRegisterStatCounter(RECT_LOCAL, "proxy.local.librecords.testing.counter", (RecCounter) 99, RECP_NON_PERSISTENT);
}

#endif