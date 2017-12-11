#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectAction.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolChampSelectLegacyV1SessionActionsById (const https::Info& _info_,
      const uint64_t& id /**/,
      const LolChampSelectLegacyChampSelectAction& data /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-champ-select-legacy/v1/session/actions/"+to_string(id)+"?", { 
    }, { 
    },data) };
  }
} 