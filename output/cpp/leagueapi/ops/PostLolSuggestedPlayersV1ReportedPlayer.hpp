#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSuggestedPlayersSuggestedPlayersReportedPlayer.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolSuggestedPlayersV1ReportedPlayer (const https::Info& _info_,
      const LolSuggestedPlayersSuggestedPlayersReportedPlayer& resource /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-suggested-players/v1/reported-player?", { 
    }, { 
    },resource) };
  }
} 