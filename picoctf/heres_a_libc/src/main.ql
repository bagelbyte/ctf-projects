/**
 * @name Block
 * @kind problem
 * @problem.severity warning
 * @id cpp/example/block
 */

import cpp
import semmle.code.cpp.dataflow.DataFlow
import DataFlow::PathGraph


// class Config extends DataFlow::Configuration {
//     Config() { this = "Use after free" }

//     override predicate isSource(DataFlow::Node arg) {
//         exists(
//             FunctionCall call | 
//             call.getTarget().hasGlobalOrStdName("free") and 
//             call.getArgument(0) = arg.asDefiningArgument()
//         )
//     }
    
//     override predicate isSink(DataFlow::Node sink) {
//         dereferenced(sink.asExpr())
//     }
// }

// from DataFlow::PathNode source, DataFlow::PathNode sink, Config config
// where config.hasFlowPath(source, sink)
// select sink, source, sink, "Potential use-after-free: memory is used $@ and freed $@",
// sink, "here", source, "here"

from FunctionCall a
where a.getTarget().hasGlobalOrStdName("scanf")
select a 