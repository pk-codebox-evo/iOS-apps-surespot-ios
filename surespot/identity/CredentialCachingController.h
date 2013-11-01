//
//  CredentialCachingController.h
//  surespot
//
//  Created by Adam on 8/5/13.
//  Copyright (c) 2013 2fours. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EncryptionController.h"
#import "PublicKeys.h"

@interface CredentialCachingController : NSObject
+(CredentialCachingController*)sharedInstance;

@property (nonatomic, retain) NSMutableDictionary * sharedSecretsDict;
@property (nonatomic, retain) NSMutableDictionary * publicKeysDict;
@property (nonatomic, retain) NSMutableDictionary * identitiesDict;
@property (nonatomic, strong) NSOperationQueue * secretQueue;
@property (nonatomic, strong) NSOperationQueue * publicKeyQueue;
@property (atomic, strong) NSString * loggedInUsername;
@property (nonatomic, strong) NSMutableDictionary* identities;
-(void) getSharedSecretForOurVersion: (NSString *) ourVersion theirUsername: (NSString *) theirUsername theirVersion: (NSString *) theirVersion callback: (CallbackBlock) callback;
-(void) loginIdentity: (SurespotIdentity *) identity;

@end