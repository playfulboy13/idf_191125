idf_component_register(SRCS "main.c" "user_task.c"
INCLUDE_DIRS "."
REQUIRES driver freertos mqtt esp_wifi nvs_flash json 
EMBED_TXTFILES "hivemq_root_ca.pem")