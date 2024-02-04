//
//  MentaLocationManager.h
//  MentaVlionBaseSDK
//
//  Created by iMacMe on 2023/12/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MentaLocationManager : NSObject 
@property (nonatomic, assign, readonly) double latitude;
@property (nonatomic, assign, readonly) double longitude;
@property (nonatomic, copy, readonly) NSString *ssid;
@property (nonatomic, copy, readonly) NSString *bssid;
@property (nonatomic, copy, readonly) NSString *wifiName;

+ (instancetype)sharedManager;


@end

NS_ASSUME_NONNULL_END
