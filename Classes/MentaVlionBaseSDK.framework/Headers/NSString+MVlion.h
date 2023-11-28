//
//  NSString+MVlion.h
//  MentaVlionSDK
//
//  Created by iMacMe on 2023/11/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (MVlion)
+ (BOOL)mvl_isEmpty:(NSString *)string;

+ (NSString *)mvl_md5:(NSString *)str;

// dictionary ->json
+ (NSString *)mvl_jsonStringFromDictionary:(NSDictionary *)dictionary;
@end

NS_ASSUME_NONNULL_END
