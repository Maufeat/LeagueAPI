#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MembershipInviteDto { 
    std::string clubName;
    std::string inviteePlatformId;
    uint64_t inviteeAccountId;
    uint64_t inviterSummonerId;
    std::string clubKey;
    std::string inviterPlatformId;
    int32_t status;
    uint64_t inviteeSummonerId;
    uint64_t inviterAccountId; 
  };
  inline void to_json(json& j, const MembershipInviteDto& v) {
    j["clubName"] = v.clubName; 
    j["inviteePlatformId"] = v.inviteePlatformId; 
    j["inviteeAccountId"] = v.inviteeAccountId; 
    j["inviterSummonerId"] = v.inviterSummonerId; 
    j["clubKey"] = v.clubKey; 
    j["inviterPlatformId"] = v.inviterPlatformId; 
    j["status"] = v.status; 
    j["inviteeSummonerId"] = v.inviteeSummonerId; 
    j["inviterAccountId"] = v.inviterAccountId; 
  }
  inline void from_json(const json& j, MembershipInviteDto& v) {
    v.clubName = j.at("clubName").get<std::string>(); 
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>(); 
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
  }
}