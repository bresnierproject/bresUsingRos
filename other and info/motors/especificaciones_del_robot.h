#ifndef ESPECIFICACIONES_DEL_ROBOT_H
#define ESPECIFICACIONES_DEL_ROBOT_H

#define pulso_encoders             32  // conteos por revolución de los encoders en cada canal
#define relacion_transformacion    131.25  // relación de transformación propia del motorreductor c/encoder
#define diametro_ruedas            0.12   //diámetro en m  original (0.14, principal actor en zig-zag)
#define ancho_ruedas               0.037   // ancho o espesor de las ruedas en m
#define distancia_ruedas           0.42   // distancia de separación de las ruedas en m (0.40)
#define MAX_RPM                    80    // velocidad máxima de los motorreductores sin carga al parecer (16)
#define pi                         3.1415926  
#define dos_pi                     6.2831853
#endif
