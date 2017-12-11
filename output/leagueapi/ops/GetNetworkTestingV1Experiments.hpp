#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/NetworkExperimentsResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<NetworkExperimentsResource> GetNetworkTestingV1Experiments (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/network-testing/v1/experiments?", { 
    }, { 
    },"") };
  }
} 