#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<uint64_t> PostLolLobbyV2LobbyMembersBySummonerIdRevokeInvite (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/lobby/members/"+to_string(summonerId)+"/revoke-invite?", { 
    }, { 
    },"") };
  }
} 