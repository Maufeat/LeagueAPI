#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MembershipInviteDto { 
    std::string clubKey;
    std::string clubName;
    int32_t status;
    std::string inviterPlatformId;
    uint64_t inviterAccountId;
    uint64_t inviterSummonerId;
    std::string inviteePlatformId;
    uint64_t inviteeSummonerId;
    uint64_t inviteeAccountId; 
  };
  inline void to_json(json& j, const MembershipInviteDto& v) {
    j["clubKey"] = v.clubKey; 
    j["clubName"] = v.clubName; 
    j["status"] = v.status; 
    j["inviterPlatformId"] = v.inviterPlatformId; 
    j["inviterAccountId"] = v.inviterAccountId; 
    j["inviterSummonerId"] = v.inviterSummonerId; 
    j["inviteePlatformId"] = v.inviteePlatformId; 
    j["inviteeSummonerId"] = v.inviteeSummonerId; 
    j["inviteeAccountId"] = v.inviteeAccountId; 
  }
  inline void from_json(const json& j, MembershipInviteDto& v) {
    v.clubKey = j.at("clubKey").get<std::string>(); 
    v.clubName = j.at("clubName").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.inviterPlatformId = j.at("inviterPlatformId").get<std::string>(); 
    v.inviterAccountId = j.at("inviterAccountId").get<uint64_t>(); 
    v.inviterSummonerId = j.at("inviterSummonerId").get<uint64_t>(); 
    v.inviteePlatformId = j.at("inviteePlatformId").get<std::string>(); 
    v.inviteeSummonerId = j.at("inviteeSummonerId").get<uint64_t>(); 
    v.inviteeAccountId = j.at("inviteeAccountId").get<uint64_t>(); 
  }
}