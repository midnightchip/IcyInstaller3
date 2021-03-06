//
//  SearchViewController.h
//  IcyInstaller3
//
//  Created by ArtikusHG on 7/20/18.
//  Copyright © 2018 ArtikusHG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ViewController.h"

@interface SearchViewController : UIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, NSURLConnectionDataDelegate>

- (void)showPackageOptions;
+ (UIWebView *)getDepictionWebView;
+ (UITextView *)getProgressTextView;
+ (int)getPackageIndex;
+ (NSMutableArray *)getSearchFilenames;
+ (BOOL)getOptions;
+ (UIView *)getDismiss;
+ (UITextField *)getSearchField;
+ (UITableView *)getSearchTableView;
+ (void)dismissDepiction;
- (void)downloadWithProgressAndURLString:(NSString *)urlString saveFilename:(NSString *)filename;
@property (strong, nonatomic) NSMutableArray *searchPackages;
@property (strong, nonatomic) NSMutableArray *searchNames;
@property (strong, nonatomic) NSMutableArray *searchDescs;
@property (strong, nonatomic) NSMutableArray *searchDepictions;

@end
