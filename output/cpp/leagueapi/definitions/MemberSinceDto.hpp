#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PlayerInfoDto.hpp>

namespace leagueapi {
  struct MemberSinceDto { /**/ 
    PlayerInfoDto playerInfo;/**/
    int64_t since;/**/
    std::string role;/**/
  };
  static void to_json(json& j, const MemberSinceDto& v) { 
    j["playerInfo"] = v.playerInfo;
    j["since"] = v.since;
    j["role"] = v.role;
  }
  static void from_json(const json& j, MemberSinceDto& v) { 
    v.playerInfo = j.at("playerInfo").get<PlayerInfoDto>(); 
    v.since = j.at("since").get<int64_t>(); 
    v.role = j.at("role").get<std::string>(); 
  }
} 