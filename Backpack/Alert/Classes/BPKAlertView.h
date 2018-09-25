/*
 * Backpack - Skyscanner's Design System
 *
 * Copyright 2018 Skyscanner Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <UIKit/UIKit.h>
#import <Backpack/Button.h>
#import <Backpack/Color.h>


@protocol BPKAlertViewDelegate <NSObject>

- (void)primaryActionTapped;
- (void)secondaryActionTapped;

@end

@interface BPKAlertView : UIView

@property (nonatomic, weak) id<BPKAlertViewDelegate> delegate;
@property (nonatomic) BOOL hasShadow;

-(void)setHeadColor:(BPKColor * _Nullable)color;
-(void)setTitle:(NSString *)titleString;
-(void)setDescription:(NSString *)descriptionString;
-(void)setPrimaryButtonStyle:(BPKButtonStyle)style;
-(void)setPrimaryButtonTitle:(NSString *)buttonTitle;
-(void)setSecondaryButtonStyle:(BPKButtonStyle)style;
-(void)setSecondaryButtonTitle:(NSString *)buttonTitle;

@end