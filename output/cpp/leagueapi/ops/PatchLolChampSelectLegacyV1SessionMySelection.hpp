#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectMySelection.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolChampSelectLegacyV1SessionMySelection (const https::Info& _info_,
      const LolChampSelectLegacyChampSelectMySelection& selection /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-champ-select-legacy/v1/session/my-selection?", { 
    }, { 
    },selection) };
  }
} 