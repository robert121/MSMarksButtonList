//
//  MSButtonConfigurationModel.h
//  MishiOS
//
//  Created by 夏敏 on 10/4/15.
//  Copyright © 2015 ___MISHI___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MSButtonConfigurationModel : NSObject

@property (nonatomic, assign)  CGFloat edgeMargin;//leading and trailing padding
@property (nonatomic, assign)  CGFloat horMargin;//Horizontal padding between buttons
@property (nonatomic, assign)  CGFloat verMargin;//Vertical padding between buttons
@property (nonatomic, assign)  CGFloat buttonHeight;//height of button

@property (nonatomic, assign) CGFloat fromTopMargin;//padding form top
@property (nonatomic, getter=isHide)  BOOL hide;//hide when initial




-(instancetype)initWithEdgeMargin:(CGFloat)edgeMargin
                        horMargin:(CGFloat)horMargin
                        verMargin:(CGFloat)verMargin
                     buttonHeight:(CGFloat)buttonHeight
                    fromTopMargin:(CGFloat)fromTopMargin;

@end