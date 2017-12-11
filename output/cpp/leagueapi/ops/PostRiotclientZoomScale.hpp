#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Handles changing the zoom scale value.*/
  static https::Result<void> PostRiotclientZoomScale (const https::Info& _info_,
      const double& newZoomScale /*The new value of the zoom scale.*/ )
  { 
    return { https::Do(_info_, "post", "/riotclient/zoom-scale?", { 
      { "newZoomScale", to_string(newZoomScale) },
    }, { 
    }) };
  }
} 