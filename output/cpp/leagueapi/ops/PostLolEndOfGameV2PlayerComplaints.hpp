#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolEndOfGameEndOfGamePlayerComplaintV2.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolEndOfGameEndOfGamePlayerComplaintV2> PostLolEndOfGameV2PlayerComplaints (const https::Info& _info_,
      const LolEndOfGameEndOfGamePlayerComplaintV2& complaint /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-end-of-game/v2/player-complaints?", { 
    }, { 
    },complaint) };
  }
} 