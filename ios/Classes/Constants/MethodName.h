@interface MethodName : NSObject 

extern NSString * const METHOD_NAME_CREATE_CLIENT;
extern NSString * const METHOD_NAME_DESTROY_CLIENT;
extern NSString * const METHOD_NAME_START_DEVICE_SCAN;
extern NSString * const METHOD_NAME_STOP_DEVICE_SCAN;

extern NSString * const METHOD_NAME_CONNECT_TO_DEVICE;
extern NSString * const METHOD_NAME_IS_DEVICE_CONNECTED;
extern NSString * const METHOD_NAME_OBSERVE_CONNECTION_STATE;
extern NSString * const METHOD_NAME_CANCEL_CONNECTION;

extern NSString * const METHOD_NAME_DISCOVER_ALL_SERVICES_AND_CHARACTERISTICS;
extern NSString * const METHOD_NAME_GET_SERVICES;
extern NSString * const METHOD_NAME_GET_CHARACTERISTICS;
extern NSString * const METHOD_NAME_GET_CHARACTERISTICS_FOR_SERVICE;

extern NSString * const METHOD_NAME_LOG_LEVEL;
extern NSString * const METHOD_NAME_SET_LOG_LEVEL;

extern NSString * const METHOD_NAME_RSSI;

extern NSString * const METHOD_NAME_REQUEST_MTU;

@end