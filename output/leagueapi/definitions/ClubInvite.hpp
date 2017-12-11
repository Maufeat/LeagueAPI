#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/ClubInviteStatus.hpp>"

namespace leagueapi {
  struct ClubInvite { /**/ 
    std::string clubKey;/**/
    uint64_t inviteeAccountId;/**/
    uint64_t inviteeSummonerId;/**/
    uint64_t inviterAccountId;/**/
    std::string clubName;/**/
    std::string inviterSummonerName;/**/
    uint64_t inviterSummonerId;/**/
    ClubInviteStatus status;/**/
  };
  static void to_json(json& j, const ClubInvite& v) { 
    j["clubKey"] = v.clubKey;
    j["inviteeAccountId"] = v.inviteeAccountId;
    j["inviteeSummonerId"] = v.inviteeSummonerId;
    j["inviterAccountId"] = v.inviterAccountId;
    j["clubName"] = v.clubName;
    j["inviterSummonerName"] = v.inviterSummonerName;
    j["inviterSummonerId"] = v.inviterSummonerId;
    j["status"] = v.status;
  }
  static void from_json(const json& j, ClubInvite& v) { 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>(); 
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
    v.status = j.at("status").get<ClubInviteStatus>(); 
  }
} 