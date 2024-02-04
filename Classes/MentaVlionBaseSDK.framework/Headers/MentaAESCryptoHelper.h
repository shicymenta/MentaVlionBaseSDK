//
//  MentaAESCryptoHelper.h
//  MentaSDKExample
//
//  Created by iMacMe on 2023/12/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
NSString * advanceAesEncryptString(NSString *content, NSString *key);
NSString * advanceAesDecryptString(NSString *content, NSString *key);

@interface MentaAESCryptoHelper : NSObject







//+ (NSString *)encrypt:(NSString *)plainText key:(NSString *)key iv:(NSString *)iv;
//+ (NSString *)decrypt:(NSString *)cipherText key:(NSString *)key iv:(NSString *)iv;

@end

NS_ASSUME_NONNULL_END
