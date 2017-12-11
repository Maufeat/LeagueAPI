#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Gets the last known posted zoom-scale value.*/
  static https::Result<double> GetRiotclientZoomScale (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/zoom-scale?", { 
    }, { 
    }) };
  }
} 