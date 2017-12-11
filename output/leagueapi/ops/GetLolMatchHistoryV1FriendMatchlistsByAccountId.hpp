#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchHistoryMatchHistoryList.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1FriendMatchlistsByAccountId (const https::Info& _info_,
      const uint64_t& accountId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-match-history/v1/friend-matchlists/"+to_string(accountId)+"?", { 
    }, { 
    },"") };
  }
} 