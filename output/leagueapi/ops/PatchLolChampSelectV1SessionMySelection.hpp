#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectMySelection.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolChampSelectV1SessionMySelection (const https::Info& _info_,
      const LolChampSelectChampSelectMySelection& selection /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-champ-select/v1/session/my-selection?", { 
    }, { 
    },selection) };
  }
} 