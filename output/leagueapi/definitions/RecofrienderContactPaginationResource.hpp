#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderContactPaginationResource { /**/ 
    uint64_t total;/**/
    uint64_t start;/**/
    bool more;/**/
    uint64_t limit;/**/
    uint64_t cached;/**/
    uint64_t count;/**/
  };
  static void to_json(json& j, const RecofrienderContactPaginationResource& v) { 
    j["total"] = v.total;
    j["start"] = v.start;
    j["more"] = v.more;
    j["limit"] = v.limit;
    j["cached"] = v.cached;
    j["count"] = v.count;
  }
  static void from_json(const json& j, RecofrienderContactPaginationResource& v) { 
    v.total = j.at("total").get<uint64_t>(); 
    v.start = j.at("start").get<uint64_t>(); 
    v.more = j.at("more").get<bool>(); 
    v.limit = j.at("limit").get<uint64_t>(); 
    v.cached = j.at("cached").get<uint64_t>(); 
    v.count = j.at("count").get<uint64_t>(); 
  }
} 