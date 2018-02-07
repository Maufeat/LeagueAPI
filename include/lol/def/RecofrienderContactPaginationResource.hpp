#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderContactPaginationResource { 
    uint64_t start;
    uint64_t limit;
    uint64_t cached;
    uint64_t total;
    uint64_t count;
    bool more; 
  };
  inline void to_json(json& j, const RecofrienderContactPaginationResource& v) {
    j["start"] = v.start; 
    j["limit"] = v.limit; 
    j["cached"] = v.cached; 
    j["total"] = v.total; 
    j["count"] = v.count; 
    j["more"] = v.more; 
  }
  inline void from_json(const json& j, RecofrienderContactPaginationResource& v) {
    v.start = j.at("start").get<uint64_t>(); 
    v.limit = j.at("limit").get<uint64_t>(); 
    v.cached = j.at("cached").get<uint64_t>(); 
    v.total = j.at("total").get<uint64_t>(); 
    v.count = j.at("count").get<uint64_t>(); 
    v.more = j.at("more").get<bool>(); 
  }
}