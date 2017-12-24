#pragma once
#include "../base_def.hpp" 
#include "PlayerInfoDto.hpp"
namespace lol {
  struct MemberSinceDto { 
    std::string role;
    PlayerInfoDto playerInfo;
    int64_t since; 
  };
  inline void to_json(json& j, const MemberSinceDto& v) {
    j["role"] = v.role; 
    j["playerInfo"] = v.playerInfo; 
    j["since"] = v.since; 
  }
  inline void from_json(const json& j, MemberSinceDto& v) {
    v.role = j.at("role").get<std::string>(); 
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto>(); 
    v.since = j.at("since").get<int64_t>(); 
  }
}