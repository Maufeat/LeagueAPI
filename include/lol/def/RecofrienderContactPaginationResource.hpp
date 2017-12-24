#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderContactPaginationResource { 
    bool more;
    uint64_t count;
    uint64_t start;
    uint64_t cached;
    uint64_t total;
    uint64_t limit; 
  };
  inline void to_json(json& j, const RecofrienderContactPaginationResource& v) {
    j["more"] = v.more; 
    j["count"] = v.count; 
    j["start"] = v.start; 
    j["cached"] = v.cached; 
    j["total"] = v.total; 
    j["limit"] = v.limit; 
  }
  inline void from_json(const json& j, RecofrienderContactPaginationResource& v) {
    v.more = j.at("more").get<bool>(); 
    v.count = j.at("count").get<uint64_t>(); 
    v.start = j.at("start").get<uint64_t>(); 
    v.cached = j.at("cached").get<uint64_t>(); 
    v.total = j.at("total").get<uint64_t>(); 
    v.limit = j.at("limit").get<uint64_t>(); 
  }
}