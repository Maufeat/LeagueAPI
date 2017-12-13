#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderContactPaginationResource { 
    uint64_t total;
    uint64_t count;
    uint64_t limit;
    uint64_t cached;
    uint64_t start;
    bool more; 
  };
  void to_json(json& j, const RecofrienderContactPaginationResource& v) {
    j["total"] = v.total; 
    j["count"] = v.count; 
    j["limit"] = v.limit; 
    j["cached"] = v.cached; 
    j["start"] = v.start; 
    j["more"] = v.more; 
  }
  void from_json(const json& j, RecofrienderContactPaginationResource& v) {
    v.total = j.at("total").get<uint64_t>(); 
    v.count = j.at("count").get<uint64_t>(); 
    v.limit = j.at("limit").get<uint64_t>(); 
    v.cached = j.at("cached").get<uint64_t>(); 
    v.start = j.at("start").get<uint64_t>(); 
    v.more = j.at("more").get<bool>(); 
  }
}