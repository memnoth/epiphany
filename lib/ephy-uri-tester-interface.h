/* -*- Mode: C; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 *  Copyright © 2016 Igalia S.L.
 *
 *  This file is part of Epiphany.
 *
 *  Epiphany is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Epiphany is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Epiphany.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

G_BEGIN_DECLS

static const char ephy_uri_tester_introspection_xml[] =
  "<node>"
  " <interface name='org.gnome.Epiphany.UriTester'>"
  "  <method name='MaybeRewriteUri'>"
  "   <arg name='request_uri' type='s' direction='in'/>"
  "   <arg name='page_uri' type='s' direction='in'/>"
  "   <arg name='flags' type='i' direction='in'/>"
  "   <arg name='modified_request_uri' type='s' direction='out'/>"
  "  </method>"
  " </interface>"
  "</node>";

typedef enum
{
  EPHY_URI_TEST_ADBLOCK          = 1 << 1,
  EPHY_URI_TEST_TRACKING_QUERIES = 1 << 2,
  EPHY_URI_TEST_HTTPS_EVERYWHERE = 1 << 3,
  EPHY_URI_TEST_ALL              = EPHY_URI_TEST_ADBLOCK | EPHY_URI_TEST_TRACKING_QUERIES | EPHY_URI_TEST_HTTPS_EVERYWHERE
} EphyUriTestFlags;

G_END_DECLS