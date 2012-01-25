//
//  ABGetMe.h
//  Invy
//
//  Created by Joeri Djojosoeparto on 1/25/12.
//  Copyright (c) 2012 Bread & Pepper. All rights reserved.
//

#import <AddressBook/AddressBook.h>

NSArray* AccountEmailAddresses(void);

ABRecordRef ABGetMe(ABAddressBookRef addressBook);
