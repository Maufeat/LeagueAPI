#pragma once
#include "../base_def.hpp" 
#include "ClubInviteStatus.hpp"
namespace lol {
  struct ClubInvite { 
    uint64_t inviteeSummonerId;
    std::string inviterSummonerName;
    uint64_t inviterSummonerId;
    ClubInviteStatus status;
    std::string clubName;
    uint64_t inviteeAccountId;
    uint64_t inviterAccountId;
    std::string clubKey; 
  };
  inline void to_json(json& j, const ClubInvite& v) {
    j["inviteeSummonerId"] = v.inviteeSummonerId; 
    j["inviterSummonerName"] = v.inviterSummonerName; 
    j["inviterSummonerId"] = v.inviterSummonerId; 
    j["status"] = v.status; 
    j["clubName"] = v.clubName; 
    j["inviteeAccountId"] = v.inviteeAccountId; 
    j["inviterAccountId"] = v.inviterAccountId; 
    j["clubKey"] = v.clubKey; 
  }
  inline void from_json(const json& j, ClubInvite& v) {
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
    v.inviterSummonerName = j.at("inviterSummonerName").get<std::string>(); 
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
    v.status = j.at("status").get<ClubInviteStatus>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
  }
}