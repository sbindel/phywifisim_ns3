/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010 Jens Mittag, Stylianos Papanastasiou
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Jens Mittag <jens.mittag@kit.edu>
 *      Stylianos Papanastasiou <stylianos@gmail.com>
 */

#ifndef PHYSIM_WIFI_CONVOLUTIONAL_TEST_H_
#define PHYSIM_WIFI_CONVOLUTIONAL_TEST_H_

#include "ns3/test.h"
#include "ns3/physim-convolutional-encoder.h"

using namespace ns3;

/**
 * Test case to verify that convolutional (de)coding works according to the
 * specifications outlined in Section 17 of the IEEE 802.11 standard.
 */
class PhySimWifiConvolutionalTest : public ns3::TestCase
{
public:
  PhySimWifiConvolutionalTest ();
  virtual ~PhySimWifiConvolutionalTest ();

private:
  void DoRun (void);
  bool RunSingle (WifiCodeRate rate);
  bool RunAnnexG (void);
  Ptr<PhySimConvolutionalEncoder> m_convolutional;
};

#endif /* PHYSIM_WIFI_CONVOLUTIONAL_TEST_H_ */
