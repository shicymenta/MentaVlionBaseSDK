//
//  MVlionDevice.h
//  MentaVlionSDK
//
//  Created by iMacMe on 2023/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MVlionDevice : NSObject
+ (NSString *)getIDFA;

+ (NSString *)getUUID;

+ (NSString *)getIPAddress;

+ (BOOL)getIsIphone;

+ (NSString *)getDeviceModel;

+ (NSString *)getOsv;

+ (NSNumber *)getScreenHeight;

+ (NSNumber *)getScreenWidth;

+ (NSInteger)getNetconnType;

+ (NSString *)getCarrier;

+ (NSString *)getBootTime;

+ (NSString *)getUpdateTime;

+ (NSString *)md5:(NSString *)str;

@end

NS_ASSUME_NONNULL_END
