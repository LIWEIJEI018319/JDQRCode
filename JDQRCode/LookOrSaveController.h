//
//  LookOrSaveController.h
//  JDQRCode
//
//  Created by 李伟杰 on 2018/12/5.
//  Copyright © 2018 jd. All rights reserved.
//

#import "BaseUIViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface LookOrSaveController : BaseUIViewController

+ (void)startWithNav:(UINavigationController *)nav str:(NSString *)str type:(NSString *)type logo:(UIImage *)logo;

@end

NS_ASSUME_NONNULL_END
