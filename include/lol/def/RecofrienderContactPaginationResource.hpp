#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderContactPaginationResource { 
    uint64_t start;
    bool more;
    uint64_t cached;
    uint64_t total;
    uint64_t count;
    uint64_t limit; 
  };
  inline void to_json(json& j, const RecofrienderContactPaginationResource& v) {
    j["start"] = v.start; 
    j["more"] = v.more; 
    j["cached"] = v.cached; 
    j["total"] = v.total; 
    j["count"] = v.count; 
    j["limit"] = v.limit; 
  }
  inline void from_json(const json& j, RecofrienderContactPaginationResource& v) {
    v.start = j.at("start").get<uint64_t>(); 
    v.more = j.at("more").get<bool>(); 
    v.cached = j.at("cached").get<uint64_t>(); 
    v.total = j.at("total").get<uint64_t>(); 
    v.count = j.at("count").get<uint64_t>(); 
    v.limit = j.at("limit").get<uint64_t>(); 
  }
}