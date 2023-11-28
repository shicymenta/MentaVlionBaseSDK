//
//  MVlionAES.h
//  MentaVlionSDK
//
//  Created by iMacMe on 2023/11/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MVlionAES : NSString
/**< 加密方法 */
- (NSString*)aci_encryptWithAES;

/**< 解密方法 */
- (NSString*)aci_decryptWithAES;

/**< 解密方法 */
- (NSString*)aci_decryptWithAESWithKey: (NSString *)key;

@end

NS_ASSUME_NONNULL_END
