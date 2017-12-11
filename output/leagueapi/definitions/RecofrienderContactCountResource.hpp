#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderContactCountResource { /**/ 
    uint64_t count;/**/
  };
  static void to_json(json& j, const RecofrienderContactCountResource& v) { 
    j["count"] = v.count;
  }
  static void from_json(const json& j, RecofrienderContactCountResource& v) { 
    v.count = j.at("count").get<uint64_t>(); 
  }
} 