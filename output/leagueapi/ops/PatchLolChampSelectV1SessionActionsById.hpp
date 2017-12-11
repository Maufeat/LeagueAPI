#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectAction.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchLolChampSelectV1SessionActionsById (const https::Info& _info_,
      const uint64_t& id /**/,
      const LolChampSelectChampSelectAction& data /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-champ-select/v1/session/actions/"+to_string(id)+"?", { 
    }, { 
    },data) };
  }
} 