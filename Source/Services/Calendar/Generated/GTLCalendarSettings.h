/* Copyright (c) 2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLCalendarSettings.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Description:
//   Manipulates events and other calendar data.
// Documentation:
//   https://developers.google.com/google-apps/calendar/firstapp
// Classes:
//   GTLCalendarSettings (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLCalendarSetting;

// ----------------------------------------------------------------------------
//
//   GTLCalendarSettings
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLCalendarSettings : GTLCollectionObject

// Etag of the collection.
@property (nonatomic, copy) NSString *ETag;

// List of user settings.
@property (nonatomic, retain) NSArray *items;  // of GTLCalendarSetting

// Type of the collection ("calendar#settings").
@property (nonatomic, copy) NSString *kind;

// Token used to access the next page of this result. Omitted if no further
// results are available, in which case nextSyncToken is provided.
@property (nonatomic, copy) NSString *nextPageToken;

// Token used at a later point in time to retrieve only the entries that have
// changed since this result was returned. Omitted if further results are
// available, in which case nextPageToken is provided.
@property (nonatomic, copy) NSString *nextSyncToken;

@end
